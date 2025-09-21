#ifndef YK_ALLOY_TUPLE_SPLIT_HPP
#define YK_ALLOY_TUPLE_SPLIT_HPP

#include "yk/alloy/detail/tuple_deduce_t.hpp"

#include "yk/alloy/tuple.hpp"

#include <utility>

#include <cstddef>

namespace yk::alloy {

namespace detail {

template<class... Ts>
struct type_list;

template<std::size_t Pos, class TIndexSeq, class UIndexSeq>
struct index_sequence_split_impl;

template<std::size_t Pos, std::size_t... Is, std::size_t... Js>
  requires (sizeof...(Is) == Pos)
struct index_sequence_split_impl<Pos, std::index_sequence<Is...>, std::index_sequence<Js...>> {
  using head = std::index_sequence<Is...>;
  using tail = std::index_sequence<Js...>;
};

template<std::size_t Pos, std::size_t... Is, std::size_t J, std::size_t... Js>
  requires (sizeof...(Is) < Pos)
struct index_sequence_split_impl<Pos, std::index_sequence<Is...>, std::index_sequence<J, Js...>>
    : index_sequence_split_impl<Pos, std::index_sequence<Is..., J>, std::index_sequence<Js...>> {};

template<std::size_t Pos, class IndexSeq>
struct index_sequence_split : index_sequence_split_impl<Pos, std::index_sequence<>, IndexSeq> {};

template<std::size_t N, class IndexSeq>
struct index_sequence_take {
  using type = typename index_sequence_split<N, IndexSeq>::head;
};

template<std::size_t N, class IndexSeq>
using index_sequence_take_t = typename index_sequence_take<N, IndexSeq>::type;

template<std::size_t N, class IndexSeq>
struct index_sequence_drop {
  using type = typename index_sequence_split<N, IndexSeq>::tail;
};

template<std::size_t N, class IndexSeq>
using index_sequence_drop_t = typename index_sequence_drop<N, IndexSeq>::type;

template<std::size_t From, std::size_t To, class IndexSeq>
struct index_sequence_subrange {
  using type = index_sequence_take_t<To - From, index_sequence_drop_t<From, IndexSeq>>;
};

template<std::size_t From, std::size_t To, class IndexSeq>
using index_sequence_subrange_t = typename index_sequence_subrange<From, To, IndexSeq>::type;

template<class Tuple, class IndexSeq>
struct tuple_from_index_sequence;

template<class Tuple, std::size_t... Is>
struct tuple_from_index_sequence<Tuple, std::index_sequence<Is...>> {
  using type = tuple<tuple_deduce_t<Is, Tuple>...>;
};

template<class Tuple, class IndexSeq>
using tuple_from_index_sequence_t = typename tuple_from_index_sequence<Tuple, IndexSeq>::type;

template<class Tuple, class... IndexSeqs>
struct tuple_split_result_impl0 {
  using type = tuple<tuple_from_index_sequence_t<Tuple, IndexSeqs>...>;
};

template<class Tuple, class IndexSeq, class FromIndexSeq, class ToIndexSeq>
struct tuple_split_result_impl1;

template<class Tuple, class IndexSeq, std::size_t... Froms, std::size_t... Tos>
struct tuple_split_result_impl1<Tuple, IndexSeq, std::index_sequence<Froms...>, std::index_sequence<Tos...>>
    : tuple_split_result_impl0<Tuple, index_sequence_subrange_t<Froms, Tos, IndexSeq>...> {};

template<class Tuple, std::size_t... Pos>
struct tuple_split_result
    : tuple_split_result_impl1<Tuple, std::make_index_sequence<result_of::size_v<Tuple>>, std::index_sequence<0, Pos...>, std::index_sequence<Pos..., result_of::size_v<Tuple>>> {};

template<class Tuple, std::size_t... Pos>
using tuple_split_result_t = typename tuple_split_result<Tuple, Pos...>::type;

template<class ResultInnerTuple, class IndexSeq>
struct tuple_split_impl0;

template<class ResultInnerTuple, std::size_t... Is>
struct tuple_split_impl0<ResultInnerTuple, std::index_sequence<Is...>> {
  template<class Tuple>
  static constexpr ResultInnerTuple apply(Tuple&& t)
  {
    return ResultInnerTuple(alloy::get<Is>(std::forward<Tuple>(t))...);
  }
};

template<class ResultTuple, class... IndexSeqs>
struct tuple_split_impl1;

template<class... ResultInnerTuples, class... IndexSeqs>
struct tuple_split_impl1<tuple<ResultInnerTuples...>, IndexSeqs...> {
  template<class Tuple>
  static constexpr tuple<ResultInnerTuples...> apply(Tuple&& t)
  {
    return tuple<ResultInnerTuples...>(tuple_split_impl0<ResultInnerTuples, IndexSeqs>::apply(std::forward<Tuple>(t))...);
  }
};

template<class ResultTuple, class IndexSeq, class FromIndexSeq, class ToIndexSeq>
struct tuple_split_impl2;

template<class ResultTuple, class IndexSeq, std::size_t... Froms, std::size_t... Tos>
struct tuple_split_impl2<ResultTuple, IndexSeq, std::index_sequence<Froms...>, std::index_sequence<Tos...>>
    : tuple_split_impl1<ResultTuple, index_sequence_subrange_t<Froms, Tos, IndexSeq>...> {};

template<class ResultTuple, class Tuple, std::size_t... Pos>
struct tuple_split_impl
    : tuple_split_impl2<ResultTuple, std::make_index_sequence<result_of::size_v<Tuple>>, std::index_sequence<0, Pos...>, std::index_sequence<Pos..., result_of::size_v<Tuple>>> {};

}  // namespace detail

template<std::size_t... Pos, class Tuple>
constexpr detail::tuple_split_result_t<Tuple, Pos...> tuple_split(Tuple&& tuple)
{
  return detail::tuple_split_impl<detail::tuple_split_result_t<Tuple, Pos...>, Tuple, Pos...>::apply(std::forward<Tuple>(tuple));
}

}  // namespace yk::alloy

#endif  // YK_ALLOY_TUPLE_SPLIT_HPP
