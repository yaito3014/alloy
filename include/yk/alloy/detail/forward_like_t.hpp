#ifndef YK_ALLOY_DETAIL_FORWARD_LIKE_T_HPP
#define YK_ALLOY_DETAIL_FORWARD_LIKE_T_HPP

#include <type_traits>

namespace yk::alloy::detail {

template<class From, class To>
struct override_ref {
  using type = std::conditional_t<std::is_rvalue_reference_v<From>, To&&, To&>;
};

template<class From, class To>
using override_ref_t = typename override_ref<From, To>::type;

template<class From, class To>
struct copy_const {
  using type = std::conditional_t<std::is_const_v<From>, To const, To>;
};

template<class From, class To>
using copy_const_t = typename copy_const<From, To>::type;

template<class From, class To>
using forward_like_t = override_ref_t<From&&, copy_const_t<std::remove_reference_t<From>, std::remove_reference_t<To>>>;

}  // namespace yk::alloy::detail

#endif  // YK_ALLOY_DETAIL_FORWARD_LIKE_T_HPP
