#ifndef YK_ALLOY_ADAPT_STD_TUPLE_HPP
#define YK_ALLOY_ADAPT_STD_TUPLE_HPP

#include "yk/alloy/adaptor.hpp"
#include "yk/alloy/non_type_list.hpp"

#include <tuple>

namespace yk::alloy {

namespace detail {

template<std::size_t I>
struct std_tuple_getter {
  template<class Tuple>
  constexpr decltype(auto) operator()(Tuple&& tuple) const noexcept
  {
    return std::get<I>(std::forward<Tuple>(tuple));
  }
};

template<std::size_t I>
struct make_std_tuple_getter {
  static constexpr auto value = std_tuple_getter<I>{};
};

}  // namespace detail

template<class... Ts>
struct adaptor<std::tuple<Ts...>> {
  using getters = typename integer_sequence_to_non_type_list_t<std::index_sequence_for<Ts...>>::template apply_meta_t<detail::make_std_tuple_getter>;
};

}  // namespace yk::alloy

#endif  // YK_ALLOY_ADAPT_STD_TUPLE_HPP
