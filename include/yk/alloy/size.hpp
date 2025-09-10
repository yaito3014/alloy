#ifndef YK_ALLOY_SIZE_HPP
#define YK_ALLOY_SIZE_HPP

#include "yk/alloy/adaptor.hpp"

#include <type_traits>

namespace yk::alloy {

namespace result_of {

template<class T>
  requires adapted<std::remove_cvref_t<T>>
struct size : std::integral_constant<std::size_t, adaptor<T>::getters::size> {};

template<class T>
  requires adapted<std::remove_cvref_t<T>>
inline constexpr std::size_t size_v = size<T>::value;

}  // namespace result_of

template<class T>
  requires adapted<std::remove_cvref_t<T>>
constexpr std::size_t size(T&& x) noexcept
{
  return result_of::size_v<T>;
}

}  // namespace yk::alloy

#endif  // YK_ALLOY_SIZE_HPP
