#ifndef YK_ALLOY_TUPLE_HPP
#define YK_ALLOY_TUPLE_HPP

#include "yk/alloy/adaptor.hpp"
#include "yk/alloy/detail/no_unique_address.hpp"
#include "yk/alloy/get.hpp"
#include "yk/alloy/non_type_list.hpp"
#include "yk/alloy/size.hpp"

#include <type_traits>

#include <cstddef>

namespace yk::alloy {

template<class... Ts>
class tuple;

namespace detail {

template<class From, class To>
struct override_ref {
  using type = std::conditional_t<std::is_rvalue_reference_v<From>, To&&, To&>;
};

template<class From, class To>
using override_ref_t = typename override_ref<From, To>::type;

template<class From, class To>
struct copy_const {
  using type = std::conditional_t<std::is_const_v<From>, To const, To>;
};

template<class From, class To>
using copy_const_t = typename copy_const<From, To>::type;

template<class From, class To>
using forward_like_t = override_ref_t<From&&, copy_const_t<std::remove_reference_t<From>, std::remove_reference_t<To>>>;

template<class... Ts>
class tuple_impl;

template<>
class tuple_impl<> {};

template<class T, class... Ts>
class tuple_impl<T, Ts...> {
public:
  constexpr tuple_impl()
    requires std::conjunction_v<std::is_default_constructible<T>, std::is_default_constructible<Ts>...>
      : value{}, rest()
  {
  }

  constexpr tuple_impl(T const& x, Ts const&... xs)
    requires std::conjunction_v<std::is_copy_constructible<T>, std::is_copy_constructible<Ts>...>
      : value(x), rest(xs...)
  {
  }

  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0) {
      return ((forward_like_t<Self, tuple_impl>)self).value;
    } else {
      return ((forward_like_t<Self, tuple_impl>)self).rest.template get<N - 1>();
    }
  }

private:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T value;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS tuple_impl<Ts...> rest;
};

}  // namespace detail

template<class... Ts>
class tuple : private detail::tuple_impl<Ts...> {
private:
  static_assert(!std::disjunction_v<std::is_reference<Ts>...>, "reference type is not allowed to instantiate alloy::tuple");
  using base_type = detail::tuple_impl<Ts...>;

public:
  // TODO: add explicit specifier
  constexpr tuple()
    requires std::conjunction_v<std::is_default_constructible<Ts>...>
      : base_type()
  {
  }

  // TODO: add explicit specifier
  constexpr tuple(Ts const&... xs)
    requires (sizeof...(Ts) > 0) && std::conjunction_v<std::is_copy_constructible<Ts>...>
      : base_type(xs...)
  {
  }

  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    return ((detail::forward_like_t<Self, tuple>)self).base_type::template get<N>();
  }
};

template<std::size_t N, class... Ts>
constexpr decltype(auto) get(tuple<Ts...>& t)
{
  return t.template get<N>();
}

template<std::size_t N, class... Ts>
constexpr decltype(auto) get(tuple<Ts...> const& t)
{
  return t.template get<N>();
}

template<std::size_t N, class... Ts>
constexpr decltype(auto) get(tuple<Ts...>&& t)
{
  return std::move(t).template get<N>();
}

template<std::size_t N, class... Ts>
constexpr decltype(auto) get(tuple<Ts...> const&& t)
{
  return std::move(t).template get<N>();
}

namespace detail {

template<std::size_t N>
struct tuple_getter {
  template<class Tuple>
  constexpr decltype(auto) operator()(Tuple&& tuple) const noexcept
  {
    return std::forward<Tuple>(tuple).template get<N>();
  }
};

template<std::size_t N>
struct make_tuple_getter {
  static constexpr auto value = tuple_getter<N>{};
};

}  // namespace detail

template<class... Ts>
struct adaptor<tuple<Ts...>> {
  using getters = typename integer_sequence_to_non_type_list_t<std::index_sequence_for<Ts...>>::template apply_meta_t<detail::make_tuple_getter>;
};

}  // namespace yk::alloy

template<class... Ts>
struct std::tuple_size<yk::alloy::tuple<Ts...>> : std::integral_constant<std::size_t, sizeof...(Ts)> {};

template<std::size_t N, class... Ts>
struct std::tuple_element<N, yk::alloy::tuple<Ts...>> {
  using type = yk::alloy::detail::ttp_pack_indexing_t<N, Ts...>;
};

#endif  // YK_ALLOY_TUPLE_HPP
