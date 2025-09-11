#ifndef YK_ALLOY_DETAIL_FORWARD_LIKE_T_HPP
#define YK_ALLOY_DETAIL_FORWARD_LIKE_T_HPP

#include <utility>

namespace yk::alloy::detail {

template<class From, class To>
using forward_like_t = decltype(std::forward_like<From>(std::declval<To>()));

}  // namespace yk::alloy::detail

#endif  // YK_ALLOY_DETAIL_FORWARD_LIKE_T_HPP
