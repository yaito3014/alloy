#ifndef YK_ALLOY_TUPLE_DETAIL_TUPLE_IMPL_HPP
#define YK_ALLOY_TUPLE_DETAIL_TUPLE_IMPL_HPP

#include "yk/alloy/tuple/value_initialize.hpp"

#include "yk/alloy/detail/forward_like_t.hpp"
#include "yk/alloy/detail/no_unique_address.hpp"
#include "yk/alloy/detail/pack_indexing.hpp"

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comma_if.hpp>
#include <boost/preprocessor/repeat.hpp>
#include <boost/preprocessor/repeat_from_to.hpp>

#include <utility>

#include <cstddef>

#ifndef YK_ALLOY_TUPLE_LIMIT
#  define YK_ALLOY_TUPLE_LIMIT 32
#endif


namespace yk::alloy {

namespace detail {

template<class... Ts>
class tuple_impl;

template<>
class tuple_impl<> {
public:
  constexpr tuple_impl() = default;
  constexpr tuple_impl(value_initialize_t) {}
};

#define YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE (T, U, _, x, y)
#define YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1 0
#define YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2 1
#define YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME 2
#define YK_ALLOY_TUPLE_DETAIL_FUNCTION_PARAM_NAME_1 3
#define YK_ALLOY_TUPLE_DETAIL_FUNCTION_PARAM_NAME_2 4

#define YK_ALLOY_TUPLE_DETAIL_ARGS(z, i, name) BOOST_PP_COMMA_IF(i) BOOST_PP_CAT(name, i)
#define YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS(z, i, name) BOOST_PP_COMMA_IF(i) class BOOST_PP_CAT(name, i)

#define YK_ALLOY_TUPLE_DETAIL_VALUE_INITIALIZE_MEMBERS(z, i, member_name) \
  BOOST_PP_COMMA_IF(i) BOOST_PP_CAT(member_name, i) {}

#define YK_ALLOY_TUPLE_DETAIL_FORWARDING_CONSTRUCTOR_PARAMS(z, i, name_tuple)                      \
  BOOST_PP_COMMA_IF(i)                                                                             \
  BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple), i) && \
      BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_FUNCTION_PARAM_NAME_2, name_tuple), i)

#define YK_ALLOY_TUPLE_DETAIL_FORWARDING_INITIALIZE_MEMBERS(z, i, name_tuple)                                                    \
  BOOST_PP_COMMA_IF(i)                                                                                                           \
  BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, name_tuple),                                               \
               i)(static_cast<BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple), i) &&>( \
      BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_FUNCTION_PARAM_NAME_2, name_tuple), i)))

#define YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_LVALUE_REFERENCE(z, i, member_name) \
  BOOST_PP_COMMA_IF(i)                                                                       \
  BOOST_PP_CAT(member_name, i)(another.BOOST_PP_CAT(member_name, i))

#define YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_RVALUE_REFERENCE(z, i, member_name) \
  BOOST_PP_COMMA_IF(i)                                                                       \
  BOOST_PP_CAT(member_name, i)(static_cast<decltype(another)>(another).BOOST_PP_CAT(member_name, i))

#define YK_ALLOY_TUPLE_DETAIL_DECLARE_MEMBER(z, i, name_tuple)                                                                    \
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1, name_tuple), i) \
      BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, name_tuple), i);

#define YK_ALLOY_TUPLE_DETAIL_SWAP_MEMBERS(z, i, member_name) swap(BOOST_PP_CAT(member_name, i), other.BOOST_PP_CAT(member_name, i));

#define YK_ALLOY_TUPLE_DETAIL_GET(z, i, member_name) BOOST_PP_IF(i, else, ) if constexpr (N == i) return ((forward_like_t<Self, tuple_impl>)self).BOOST_PP_CAT(member_name, i);

#define YK_ALLOY_TUPLE_DETAIL_DEFINE_TUPLE_IMPL(z, n, name_tuple)                                                                                                                  \
  template<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1, name_tuple))>                                \
  class tuple_impl<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_ARGS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1, name_tuple))> {                                 \
  public:                                                                                                                                                                          \
    BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_DECLARE_MEMBER, name_tuple)                                                                                                           \
    constexpr explicit tuple_impl() = default;                                                                                                                                     \
    constexpr explicit tuple_impl(value_initialize_t)                                                                                                                              \
        : BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_VALUE_INITIALIZE_MEMBERS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, name_tuple))                                   \
    {                                                                                                                                                                              \
    }                                                                                                                                                                              \
    template<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple))>                              \
    constexpr explicit tuple_impl(BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_FORWARDING_CONSTRUCTOR_PARAMS, name_tuple))                                                             \
        : BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_FORWARDING_INITIALIZE_MEMBERS, name_tuple)                                                                                      \
    {                                                                                                                                                                              \
    }                                                                                                                                                                              \
    template<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple))>                              \
    constexpr explicit tuple_impl(                                                                                                                                                 \
        tuple_impl<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_ARGS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple))>& another)                         \
        : BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_LVALUE_REFERENCE, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, name_tuple))                \
    {                                                                                                                                                                              \
    }                                                                                                                                                                              \
    template<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple))>                              \
    constexpr explicit tuple_impl(                                                                                                                                                 \
        tuple_impl<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_ARGS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple))> const& another)                   \
        : BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_LVALUE_REFERENCE, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, name_tuple))                \
    {                                                                                                                                                                              \
    }                                                                                                                                                                              \
    template<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple))>                              \
    constexpr explicit tuple_impl(                                                                                                                                                 \
        tuple_impl<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_ARGS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple))>&& another)                        \
        : BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_RVALUE_REFERENCE, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, name_tuple))                \
    {                                                                                                                                                                              \
    }                                                                                                                                                                              \
    template<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple))>                              \
    constexpr explicit tuple_impl(                                                                                                                                                 \
        tuple_impl<BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_ARGS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, name_tuple))> const&& another)                  \
        : BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_RVALUE_REFERENCE, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, name_tuple))                \
    {                                                                                                                                                                              \
    }                                                                                                                                                                              \
    template<std::size_t N, class Self>                                                                                                                                            \
    constexpr forward_like_t<Self,                                                                                                                                                 \
                             ttp_pack_indexing_t<N, BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_ARGS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1, name_tuple))>> \
    get(this Self&& self) noexcept                                                                                                                                                 \
    {                                                                                                                                                                              \
      BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_GET, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, name_tuple))                                                            \
    }                                                                                                                                                                              \
    void swap(tuple_impl& other)                                                                                                                                                   \
    {                                                                                                                                                                              \
      using std::swap;                                                                                                                                                             \
      BOOST_PP_REPEAT(n, YK_ALLOY_TUPLE_DETAIL_SWAP_MEMBERS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE))                             \
    }                                                                                                                                                                              \
  };

BOOST_PP_REPEAT_FROM_TO(1, YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_DEFINE_TUPLE_IMPL, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)

template<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS,
                         BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
         class... BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s)>
class tuple_impl<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_ARGS,
                                 BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
                 BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s)...> {
public:
  BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_DECLARE_MEMBER, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS tuple_impl<BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s)...> rest;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_VALUE_INITIALIZE_MEMBERS,
                        BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
        rest(value_initialize)
  {
  }

  template<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS,
                           BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
           class... BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s)>
  constexpr explicit tuple_impl(BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_FORWARDING_CONSTRUCTOR_PARAMS, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE),
                                BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE),
                                             s)... BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_FUNCTION_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s))
      : BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_FORWARDING_INITIALIZE_MEMBERS, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE),
        rest(static_cast<BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s) &&>(
            BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_FUNCTION_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s))...)
  {
  }
  template<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS,
                           BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
           class... BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s)>
  constexpr explicit tuple_impl(tuple_impl<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_ARGS,
                                                           BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE))>& another)
      : BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_LVALUE_REFERENCE,
                        BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
        rest(another.rest)
  {
  }
  template<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS,
                           BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
           class... BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s)>
  constexpr explicit tuple_impl(tuple_impl<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_ARGS,
                                                           BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE))> const& another)
      : BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_LVALUE_REFERENCE,
                        BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
        rest(another.rest)
  {
  }
  template<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS,
                           BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
           class... BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s)>
  constexpr explicit tuple_impl(tuple_impl<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_ARGS,
                                                           BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE))>&& another)
      : BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_RVALUE_REFERENCE,
                        BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
        rest(static_cast<decltype(another)>(another).rest)
  {
  }
  template<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS,
                           BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
           class... BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE), s)>
  constexpr explicit tuple_impl(tuple_impl<BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_ARGS,
                                                           BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE))> const&& another)
      : BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_RVALUE_REFERENCE,
                        BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE)),
        rest(static_cast<decltype(another)>(another).rest)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_GET, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE))
    else return ((forward_like_t<Self, tuple_impl>)self).rest.template get<N - YK_ALLOY_TUPLE_LIMIT>();
  }
  void swap(tuple_impl& other)
  {
    using std::swap;
    BOOST_PP_REPEAT(YK_ALLOY_TUPLE_LIMIT, YK_ALLOY_TUPLE_DETAIL_SWAP_MEMBERS, BOOST_PP_TUPLE_ELEM(YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME, YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE))
    rest.swap(other.rest);
  }
};

#undef YK_ALLOY_TUPLE_DETAIL_ARGS
#undef YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAMS
#undef YK_ALLOY_TUPLE_DETAIL_VALUE_INITIALIZE_MEMBERS
#undef YK_ALLOY_TUPLE_DETAIL_FORWARDING_CONSTRUCTOR_PARAMS
#undef YK_ALLOY_TUPLE_DETAIL_FORWARDING_INITIALIZE_MEMBERS
#undef YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_LVALUE_REFERENCE
#undef YK_ALLOY_TUPLE_DETAIL_ANOTHER_INITIALIZE_MEMBERS_RVALUE_REFERENCE
#undef YK_ALLOY_TUPLE_DETAIL_DECLARE_MEMBER
#undef YK_ALLOY_TUPLE_DETAIL_GET
#undef YK_ALLOY_TUPLE_DETAIL_DEFINE_TUPLE_IMPL
#undef YK_ALLOY_TUPLE_DETAIL_NAME_TUPLE
#undef YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_1
#undef YK_ALLOY_TUPLE_DETAIL_TEMPLATE_PARAM_NAME_2
#undef YK_ALLOY_TUPLE_DETAIL_MEMBER_NAME
#undef YK_ALLOY_TUPLE_DETAIL_FUNCTION_PARAM_NAME_1
#undef YK_ALLOY_TUPLE_DETAIL_FUNCTION_PARAM_NAME_2
#undef YK_ALLOY_TUPLE_DETAIL_SWAP_MEMBERS

}  // namespace detail

}  // namespace yk::alloy

#endif  // YK_ALLOY_TUPLE_DETAIL_TUPLE_IMPL_HPP
