#ifndef YK_ALLOY_KEYED_VALUE_HPP
#define YK_ALLOY_KEYED_VALUE_HPP

#include "yk/alloy/detail/no_unique_address.hpp"

namespace yk::alloy {

template<class Key, class T>
struct keyed_value {
  using key_type = Key;
  using value_type = T;

  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T value;
};

}  // namespace yk::alloy

#endif  // YK_ALLOY_KEYED_VALUE_HPP
