#ifndef YK_ALLOY_TUPLE_DETAIL_TUPLE_IMPL_HPP
#define YK_ALLOY_TUPLE_DETAIL_TUPLE_IMPL_HPP

#include "yk/alloy/tuple/default_initialize.hpp"

#include "yk/alloy/detail/forward_like_t.hpp"
#include "yk/alloy/detail/no_unique_address.hpp"

#include <utility>

namespace yk::alloy {

namespace detail {

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

}  // namespace yk::alloy

#endif  // YK_ALLOY_TUPLE_DETAIL_TUPLE_IMPL_HPP
