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

template<std::size_t Pos, class FirstTypeList, class SecondTypeList>
struct tuple_split_result_impl_impl;

template<std::size_t Pos, class... Ts, class... Us>
  requires (Pos == sizeof...(Ts))
struct tuple_split_result_impl_impl<Pos, type_list<Ts...>, type_list<Us...>> {
  using type = tuple<tuple<Ts...>, tuple<Us...>>;
};

template<std::size_t Pos, class... Ts, class U, class... Us>
  requires (Pos > sizeof...(Ts))
struct tuple_split_result_impl_impl<Pos, type_list<Ts...>, type_list<U, Us...>> : tuple_split_result_impl_impl<Pos, type_list<Ts..., U>, type_list<Us...>> {};

template<std::size_t Pos, class IndexSeq, class Tuple>
struct tuple_split_result_impl;

template<std::size_t Pos, std::size_t... Is, class Tuple>
struct tuple_split_result_impl<Pos, std::index_sequence<Is...>, Tuple> : tuple_split_result_impl_impl<Pos, type_list<>, type_list<tuple_deduce_t<Is, Tuple>...>> {};

template<std::size_t Pos, class Tuple>
struct tuple_split_result : tuple_split_result_impl<Pos, std::make_index_sequence<result_of::size_v<Tuple>>, Tuple> {};

template<std::size_t Pos, class Tuple>
using tuple_split_result_t = typename tuple_split_result<Pos, Tuple>::type;

template<std::size_t Pos, class FirstIndexSeq, class SecondIndexSeq>
struct tuple_split_impl;

template<std::size_t Pos, std::size_t... Is, std::size_t... Js>
  requires (Pos == sizeof...(Is))
struct tuple_split_impl<Pos, std::index_sequence<Is...>, std::index_sequence<Js...>> {
  template<class Tuple>
  static constexpr tuple_split_result_t<Pos, Tuple> apply(Tuple&& t)
  {
    return {{alloy::get<Is>(static_cast<Tuple&&>(t))...}, {alloy::get<Js>(static_cast<Tuple&&>(t))...}};
  }
};

template<std::size_t Pos, std::size_t... Is, std::size_t J, std::size_t... Js>
    requires (Pos > sizeof...(Is))
struct tuple_split_impl<Pos, std::index_sequence<Is...>, std::index_sequence<J, Js...>> : tuple_split_impl<Pos, std::index_sequence<Is..., J>, std::index_sequence<Js...>> {};

}  // namespace detail

template<std::size_t Pos, class Tuple>
constexpr detail::tuple_split_result_t<Pos, Tuple> tuple_split(Tuple&& t)
{
  return detail::tuple_split_impl<Pos, std::index_sequence<>, std::make_index_sequence<result_of::size_v<Tuple>>>::apply(static_cast<Tuple&&>(t));
}

}  // namespace yk::alloy

#endif  // YK_ALLOY_TUPLE_SPLIT_HPP
