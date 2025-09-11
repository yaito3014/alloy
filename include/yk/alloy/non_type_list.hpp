#ifndef YK_ALLOY_NON_TYPE_LIST_HPP
#define YK_ALLOY_NON_TYPE_LIST_HPP

#include "yk/alloy/detail/pack_indexing.hpp"

#include <functional>
#include <type_traits>

#include <cstddef>

namespace yk::alloy {

template<auto... Vs>
struct non_type_list {
  static constexpr std::size_t size = sizeof...(Vs);

  template<std::size_t N>
  struct nth {
    static constexpr auto value = detail::nttp_pack_indexing_v<N, Vs...>;
  };

  template<std::size_t N>
  static constexpr auto nth_v = nth<N>::value;

  template<auto F>
  struct apply {
    using type = non_type_list<std::invoke(F, Vs)...>;
  };

  template<auto F>
  using apply_t = typename apply<F>::type;

  template<template<auto> class F>
  struct apply_meta {
    using type = non_type_list<F<Vs>::value...>;
  };

  template<template<auto> class F>
  using apply_meta_t = typename apply_meta<F>::type;
};

template<class IntegerSeq>
struct integer_sequence_to_non_type_list;

template<template<class T, T...> class TIntegerSeq, class T, T... Vs>
struct integer_sequence_to_non_type_list<TIntegerSeq<T, Vs...>> {
  using type = non_type_list<Vs...>;
};

template<class IntegerSeq>
using integer_sequence_to_non_type_list_t = typename integer_sequence_to_non_type_list<IntegerSeq>::type;

}  // namespace yk::alloy

#endif  // YK_ALLOY_NON_TYPE_LIST_HPP
