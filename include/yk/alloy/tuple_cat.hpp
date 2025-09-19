#ifndef YK_ALLOY_TUPLE_CAT_HPP
#define YK_ALLOY_TUPLE_CAT_HPP

#include "yk/alloy/detail/deduce_t.hpp"

#include "yk/alloy/get.hpp"
#include "yk/alloy/size.hpp"
#include "yk/alloy/tuple.hpp"

#include <type_traits>
#include <utility>

namespace yk::alloy {

namespace detail {

template<class... Ts>
struct type_list;

template<class... Tuples>
using make_tuple_index_seqeunce_list_t = type_list<std::make_index_sequence<result_of::size_v<Tuples>>...>;

template<class ResultTypeList, class IndexSeqList, class... Tuples>
struct tuple_cat_result_impl {};

template<class... ResultTypes>
struct tuple_cat_result_impl<type_list<ResultTypes...>, type_list<>> {
  using type = tuple<ResultTypes...>;
};

template<class... ResultTypes, std::size_t... Is, class... IndexSeqs, class Tuple, class... Tuples>
struct tuple_cat_result_impl<type_list<ResultTypes...>, type_list<std::index_sequence<Is...>, IndexSeqs...>, Tuple, Tuples...>
    : tuple_cat_result_impl<type_list<ResultTypes..., tuple_deduce_t<Is, Tuple>...>, type_list<IndexSeqs...>, Tuples...> {};

template<class... Tuples>
struct tuple_cat_result : tuple_cat_result_impl<type_list<>, make_tuple_index_seqeunce_list_t<Tuples...>, Tuples...> {};

template<class... Tuples>
using tuple_cat_result_t = typename tuple_cat_result<Tuples...>::type;

template<class ResultTuple, class IndexSeqList, class... Tuples>
struct tuple_cat_impl {};

template<class ResultTuple>
struct tuple_cat_impl<ResultTuple, type_list<>> {
  template<class... Args>
  static constexpr ResultTuple apply(Args&&... args)
  {
    return ResultTuple(std::forward<Args>(args)...);
  }
};

template<class ResultTuple, std::size_t... Is, class... IndexSeqs, class Tuple, class... Tuples>
struct tuple_cat_impl<ResultTuple, type_list<std::index_sequence<Is...>, IndexSeqs...>, Tuple, Tuples...> {
  template<class... Args>
  static constexpr ResultTuple apply(Tuple&& tuple, Tuples&&... tuples, Args&&... args)
  {
    return tuple_cat_impl<ResultTuple, type_list<IndexSeqs...>, Tuples...>::apply(std::forward<Tuples>(tuples)..., std::forward<Args>(args)...,
                                                                                  alloy::get<Is>(std::forward<Tuple>(tuple))...);
  }
};

}  // namespace detail

template<class... Tuples>
constexpr detail::tuple_cat_result_t<Tuples...> tuple_cat(Tuples&&... tuples)
{
  return detail::tuple_cat_impl<detail::tuple_cat_result_t<Tuples...>, detail::make_tuple_index_seqeunce_list_t<Tuples...>, Tuples...>::apply(std::forward<Tuples>(tuples)...);
}

}  // namespace yk::alloy

#endif  // YK_ALLOY_TUPLE_CAT_HPP
