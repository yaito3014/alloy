#ifndef YK_ALLOY_DETAIL_TUPLE_DEDUCE_T_HPP
#define YK_ALLOY_DETAIL_TUPLE_DEDUCE_T_HPP

#include "yk/alloy/get.hpp"

#include <type_traits>

namespace yk::alloy::detail {

template<class FromLValue, class FromXValue>
struct tuple_deduce_impl {
  static_assert(std::conjunction_v<std::is_lvalue_reference<FromLValue>, std::is_reference<FromXValue>>);
};

template<class T>
struct tuple_deduce_impl<T&, T&> {
  using type = T&;
};

template<class T>
struct tuple_deduce_impl<T&, T&&> {
  using type = T;
};

template<std::size_t I, class Tuple>
struct tuple_deduce : tuple_deduce_impl<result_of::get_t<I, std::remove_cvref_t<Tuple>&>, result_of::get_t<I, std::remove_cvref_t<Tuple>&&>> {};

template<std::size_t I, class Tuple>
using tuple_deduce_t = typename tuple_deduce<I, Tuple>::type;

}  // namespace yk::alloy::detail

#endif  // YK_ALLOY_DETAIL_TUPLE_DEDUCE_T_HPP
