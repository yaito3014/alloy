#ifndef YK_ALLOY_DETAIL_FORWARD_LIKE_T_HPP
#define YK_ALLOY_DETAIL_FORWARD_LIKE_T_HPP

#include <type_traits>

namespace yk::alloy::detail {

template<class From, class To>
using forward_like_t = std::conditional_t<
  std::is_rvalue_reference_v<From&&>,
  std::conditional_t<
    std::is_const_v<std::remove_reference_t<From>>,
    std::remove_cvref_t<To> const,
    std::remove_cvref_t<To>
  >&&,
  std::conditional_t<
    std::is_const_v<std::remove_reference_t<From>>,
    std::remove_cvref_t<To> const,
    std::remove_cvref_t<To>
  >&
>;

}  // namespace yk::alloy::detail

#endif  // YK_ALLOY_DETAIL_FORWARD_LIKE_T_HPP
