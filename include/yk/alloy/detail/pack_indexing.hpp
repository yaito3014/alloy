#ifndef YK_ALLOY_DETAIL_PACK_INDEXING_HPP
#define YK_ALLOY_DETAIL_PACK_INDEXING_HPP

#include <cstddef>

namespace yk::alloy::detail {

template<std::size_t N, class... Ts>
struct ttp_pack_indexing;

template<std::size_t N, class... Ts>
using ttp_pack_indexing_t = typename ttp_pack_indexing<N, Ts...>::type;

template<class T, class... Ts>
struct ttp_pack_indexing<0, T, Ts...> {
  using type = T;
};

template<std::size_t N, class T, class... Ts>
struct ttp_pack_indexing<N, T, Ts...> {
  using type = ttp_pack_indexing_t<N - 1, Ts...>;
};

template<std::size_t N, auto... Vs>
struct nttp_pack_indexing;

template<std::size_t N, auto... Vs>
inline constexpr auto nttp_pack_indexing_v = nttp_pack_indexing<N, Vs...>::value;

template<auto V, auto... Vs>
struct nttp_pack_indexing<0, V, Vs...> {
  static constexpr auto value = V;
};

template<std::size_t N, auto V, auto... Vs>
struct nttp_pack_indexing<N, V, Vs...> {
  static constexpr auto value = nttp_pack_indexing_v<N - 1, Vs...>;
};

}  // namespace yk::alloy::detail

#endif  // YK_ALLOY_DETAIL_PACK_INDEXING_HPP
