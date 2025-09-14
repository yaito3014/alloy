#ifndef YK_ALLOY_GET_GET_HPP
#define YK_ALLOY_GET_GET_HPP

#include "yk/alloy/traits/tuple_like.hpp"

#include <functional>
#include <type_traits>
#include <utility>

#include <cstddef>

namespace yk::alloy {

namespace result_of {

template<std::size_t N, class T>
  requires tuple_like<std::remove_cvref_t<T>>
struct get {
  static constexpr auto getter = adaptor<std::remove_cvref_t<T>>::getters::template nth_v<N>;
  using type = std::invoke_result_t<decltype(getter), T>;
};

template<std::size_t N, class T>
  requires tuple_like<std::remove_cvref_t<T>>
using get_t = typename get<N, T>::type;

}  // namespace result_of

template<std::size_t N, class T>
  requires tuple_like<std::remove_cvref_t<T>>
constexpr auto&& get(T&& x) noexcept
{
  return std::invoke(adaptor<std::remove_cvref_t<T>>::getters::template nth_v<N>, std::forward<T>(x));
}

}  // namespace yk::alloy

#endif  // YK_ALLOY_GET_GET_HPP
