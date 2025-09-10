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

struct default_initialize_t {};

inline constexpr default_initialize_t default_initialize{};

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

template<class Tuple, class... Us>
struct tuple_disambiguating_constraint : std::true_type {};

template<template<class...> class TTuple, class... Ts, class... Us>
  requires (sizeof...(Ts) == 1)
struct tuple_disambiguating_constraint<TTuple<Ts...>, Us...> : std::negation<std::is_same<std::remove_cvref_t<detail::ttp_pack_indexing_t<0, Us...>>, TTuple<Ts...>>> {};

template<template<class...> class TTuple, class... Ts, class... Us>
  requires (sizeof...(Ts) == 2 || sizeof...(Ts) == 3)
struct tuple_disambiguating_constraint<TTuple<Ts...>, Us...>
    : std::bool_constant<!std::is_same_v<std::remove_cvref_t<detail::ttp_pack_indexing_t<0, Us...>>, std::allocator_arg_t> ||
                         std::is_same_v<std::remove_cvref_t<detail::ttp_pack_indexing_t<0, Ts...>>, std::allocator_arg_t>> {};

template<class UTuple, class IndexSeq, class... Ts>
struct tuple_element_wise_constructible_impl {};

template<class UTuple, std::size_t... Is, class... Ts>
struct tuple_element_wise_constructible_impl<UTuple, std::index_sequence<Is...>, Ts...>
    : std::conjunction<std::is_constructible<Ts, decltype(get<Is>(std::declval<UTuple>()))>...> {};

template<class UTuple, class... Ts>
struct tuple_element_wise_constructible : tuple_element_wise_constructible_impl<UTuple, std::index_sequence_for<Ts...>, Ts...> {};

template<class UTuple, class... Ts>
inline constexpr bool tuple_element_wise_constructible_v = tuple_element_wise_constructible<UTuple, Ts...>::value;

template<class UTuple, class... Ts>
concept tuple_one_element_not_constructible_from_tuple =
    (sizeof...(Ts) > 1) || !(std::is_convertible_v<UTuple, detail::ttp_pack_indexing_t<0, Ts...>> || std::is_constructible_v<detail::ttp_pack_indexing_t<0, Ts...>, UTuple>);

template<class... Ts>
class tuple_impl;

template<>
class tuple_impl<> {};

template<class T, class... Ts>
class tuple_impl<T, Ts...> {
public:
  constexpr explicit tuple_impl(default_initialize_t) : rest(default_initialize) {}

  constexpr explicit tuple_impl() : value{}, rest() {}

  constexpr explicit tuple_impl(T const& x, Ts const&... xs) : value(x), rest(xs...) {}

  template<class U, class... Us>
  constexpr tuple_impl(tuple_impl<U, Us...>& other) : value(other.value), rest(other.rest)
  {
  }

  template<class U, class... Us>
  constexpr tuple_impl(tuple_impl<U, Us...> const& other) : value(other.value), rest(other.rest)
  {
  }

  template<class U, class... Us>
  constexpr tuple_impl(tuple_impl<U, Us...>&& other) : value(std::move(other).value), rest(std::move(other).rest)
  {
  }

  template<class U, class... Us>
  constexpr tuple_impl(tuple_impl<U, Us...> const&& other) : value(std::move(other).value), rest(std::move(other).rest)
  {
  }

  template<class U, class... Us>
  constexpr explicit tuple_impl(U&& y, Us&&... ys)
    requires (sizeof...(Ts) == sizeof...(Us))
      : value(std::forward<U>(y)), rest(std::forward<Us>(ys)...)
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
  template<class... Us>
  friend class tuple_impl;

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
  constexpr explicit tuple(default_initialize_t) : base_type(default_initialize) {}

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

  // TODO: add explicit specifier
  template<class... Us>
  constexpr tuple(Us&&... ys)
    requires requires {
      requires (sizeof...(Ts) == sizeof...(Us));
      requires (sizeof...(Ts) > 0);
      requires std::conjunction_v<detail::tuple_disambiguating_constraint<tuple, Us...>, std::is_constructible<Ts, Us>...>;
    }
      : base_type(std::forward<Us>(ys)...)
  {
  }

  tuple(tuple const&) = default;

  tuple(tuple&&)
    requires std::conjunction_v<std::is_move_constructible<Ts>...>
  = default;

  // TODO: add explicit specifier
  template<class... Us>
    requires requires {
      requires (sizeof...(Ts) == sizeof...(Us));
      requires std::negation_v<std::conjunction<std::is_same<Ts, Us>...>>;
      requires detail::tuple_element_wise_constructible_v<tuple<Us...>&, Ts...>;
      requires detail::tuple_one_element_not_constructible_from_tuple<tuple<Us...>&, Ts...>;
    }
  constexpr tuple(tuple<Us...>& other) : base_type(other)
  {
  }

  // TODO: add explicit specifier
  template<class... Us>
    requires requires {
      requires (sizeof...(Ts) == sizeof...(Us));
      requires std::negation_v<std::conjunction<std::is_same<Ts, Us>...>>;
      requires detail::tuple_element_wise_constructible_v<tuple<Us...> const&, Ts...>;
      requires detail::tuple_one_element_not_constructible_from_tuple<tuple<Us...> const&, Ts...>;
    }
  constexpr tuple(tuple<Us...> const& other) : base_type(other)
  {
  }

  // TODO: add explicit specifier
  template<class... Us>
    requires requires {
      requires (sizeof...(Ts) == sizeof...(Us));
      requires std::negation_v<std::conjunction<std::is_same<Ts, Us>...>>;
      requires detail::tuple_element_wise_constructible_v<tuple<Us...>&&, Ts...>;
      requires detail::tuple_one_element_not_constructible_from_tuple<tuple<Us...>&&, Ts...>;
    }
  constexpr tuple(tuple<Us...>&& other) : base_type(std::move(other))
  {
  }

  // TODO: add explicit specifier
  template<class... Us>
    requires requires {
      requires (sizeof...(Ts) == sizeof...(Us));
      requires std::negation_v<std::conjunction<std::is_same<Ts, Us>...>>;
      requires detail::tuple_element_wise_constructible_v<tuple<Us...> const&&, Ts...>;
      requires detail::tuple_one_element_not_constructible_from_tuple<tuple<Us...> const&&, Ts...>;
    }
  constexpr tuple(tuple<Us...> const&& other) : base_type(std::move(other))
  {
  }

  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    return ((detail::forward_like_t<Self, tuple>)self).base_type::template get<N>();
  }

private:
  template<class... Us>
  friend class tuple;
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
