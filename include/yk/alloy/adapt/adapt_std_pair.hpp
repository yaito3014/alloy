#ifndef YK_ALLOY_ADAPT_ADAPT_STD_PAIR_HPP
#define YK_ALLOY_ADAPT_ADAPT_STD_PAIR_HPP

#include "yk/alloy/adaptor.hpp"
#include "yk/alloy/non_type_list.hpp"

#include <utility>

namespace yk::alloy {

template <class First, class Second>
struct adaptor<std::pair<First, Second>> {
  using getters = non_type_list<&std::pair<First, Second>::first, &std::pair<First, Second>::second>;
};

}  // namespace yk::alloy

#endif  // YK_ALLOY_ADAPT_ADAPT_STD_PAIR_HPP
