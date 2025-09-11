#ifndef YK_ALLOY_ADAPT_ADAPT_BOOST_FUSION_VECTOR_HPP
#define YK_ALLOY_ADAPT_ADAPT_BOOST_FUSION_VECTOR_HPP

#include "yk/alloy/adaptor.hpp"
#include "yk/alloy/detail/forward_like_t.hpp"

#include <boost/fusion/container/vector.hpp>
#include <boost/fusion/sequence/intrinsic/at_c.hpp>

namespace yk::alloy {

namespace detail {

template<std::size_t N>
struct boost_fusion_vector_getter {
  template<class Vector, class ReturnType = forward_like_t<Vector, typename boost::fusion::result_of::at_c<std::remove_reference_t<Vector>, N>::type>>
  constexpr ReturnType operator()(Vector&& vec) const noexcept
  {
    return static_cast<ReturnType>(boost::fusion::at_c<N>(vec));
  }
};

template<std::size_t N>
struct make_boost_fusion_vector_getter {
  static constexpr auto value = boost_fusion_vector_getter<N>{};
};

}  // namespace detail

template<class... Ts>
struct adaptor<boost::fusion::vector<Ts...>> {
  using getters = typename integer_sequence_to_non_type_list_t<std::index_sequence_for<Ts...>>::template apply_meta_t<detail::make_boost_fusion_vector_getter>;
};

}  // namespace yk::alloy

#endif  // YK_ALLOY_ADAPT_ADAPT_BOOST_FUSION_VECTOR_HPP
