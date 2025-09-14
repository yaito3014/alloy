#ifndef YK_ALLOY_TRAITS_TUPLE_LIKE_HPP
#define YK_ALLOY_TRAITS_TUPLE_LIKE_HPP

#include "yk/alloy/detail/specialization_of.hpp"

#include "yk/alloy/adaptor.hpp"
#include "yk/alloy/non_type_list.hpp"

namespace yk::alloy {

template<class T>
concept tuple_like = requires {
  typename adaptor<T>::getters;
  requires detail::is_nttp_specialization_of_v<typename adaptor<T>::getters, non_type_list>;
};

}  // namespace yk::alloy

#endif  // YK_ALLOY_TRAITS_TUPLE_LIKE_HPP
