#ifndef YK_ALLOY_TRAITS_ASSOCIATIVE_TUPLE_LIKE_HPP
#define YK_ALLOY_TRAITS_ASSOCIATIVE_TUPLE_LIKE_HPP

#include "yk/alloy/detail/specialization_of.hpp"

#include "yk/alloy/traits/tuple_like.hpp"

#include "yk/alloy/get.hpp"
#include "yk/alloy/size.hpp"

#include "yk/alloy/keyed_value.hpp"

#include <type_traits>

#include <cstddef>

namespace yk::alloy {

namespace detail {

template<class T, class IndexSeq>
struct is_associative_tuple_like_impl : std::false_type {};

template<class T, std::size_t... Is>
struct is_associative_tuple_like_impl<T, std::index_sequence<Is...>>
    : std::conjunction<detail::is_ttp_specialization_of<std::remove_cvref_t<result_of::get_t<Is, T>>, keyed_value>...> {};

template<class T, class = void>
struct is_associative_tuple_like : std::false_type {};

template<class T>
  requires requires { result_of::size_v<T>; }
struct is_associative_tuple_like<T> : is_associative_tuple_like_impl<T, std::make_index_sequence<result_of::size_v<T>>> {};

}  // namespace detail

template<class T>
concept associative_tuple_like = tuple_like<T> && detail::is_associative_tuple_like<T>::value;

}  // namespace yk::alloy

#endif  // YK_ALLOY_TRAITS_ASSOCIATIVE_TUPLE_LIKE_HPP
