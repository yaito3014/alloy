#ifndef YK_ALLOY_GET_HPP
#define YK_ALLOY_GET_HPP

#include "yk/alloy/adaptor.hpp"

#include <functional>
#include <type_traits>
#include <utility>

#include <cstddef>

namespace yk::alloy {

namespace detail {

template<class T>
using remove_rvalue_reference_t = std::conditional_t<std::is_rvalue_reference_v<T>, std::remove_reference_t<T>, T>;

}  // namespace detail

namespace result_of {

template<std::size_t N, class T>
  requires adapted<std::remove_cvref_t<T>>
struct get {
  using type = detail::remove_rvalue_reference_t<std::invoke_result_t<decltype(adaptor<std::remove_cvref_t<T>>::getters::template nth_v<N>), T>>;
};

template<std::size_t N, class T>
  requires adapted<std::remove_cvref_t<T>>
using get_t = typename get<N, T>::type;

}  // namespace result_of

template<std::size_t N, class T>
  requires adapted<std::remove_cvref_t<T>>
constexpr auto&& get(T&& x) noexcept
{
  return std::invoke(adaptor<std::remove_cvref_t<T>>::getters::template nth_v<N>, std::forward<T>(x));
}

}  // namespace yk::alloy

#endif  // YK_ALLOY_GET_HPP
