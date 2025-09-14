#ifndef YK_ALLOY_TUPLE_DETAIL_TUPLE_IMPL_32_HPP
#define YK_ALLOY_TUPLE_DETAIL_TUPLE_IMPL_32_HPP

#include "yk/alloy/tuple/value_initialize.hpp"

#include "yk/alloy/detail/forward_like_t.hpp"
#include "yk/alloy/detail/no_unique_address.hpp"

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
template<class T0>
class tuple_impl<T0> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{} {}
  template<class U0>
  constexpr explicit tuple_impl(U0&& y0) : _0(static_cast<U0&&>(y0))
  {
  }
  template<class U0>
  constexpr explicit tuple_impl(tuple_impl<U0>& another) : _0(another._0)
  {
  }
  template<class U0>
  constexpr explicit tuple_impl(tuple_impl<U0> const& another) : _0(another._0)
  {
  }
  template<class U0>
  constexpr explicit tuple_impl(tuple_impl<U0>&& another) : _0(static_cast<decltype(another)>(another)._0)
  {
  }
  template<class U0>
  constexpr explicit tuple_impl(tuple_impl<U0> const&& another) : _0(static_cast<decltype(another)>(another)._0)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0) return ((forward_like_t<Self, tuple_impl>)self)._0;
  }
};
template<class T0, class T1>
class tuple_impl<T0, T1> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{} {}
  template<class U0, class U1>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1) : _0(static_cast<U0&&>(y0)), _1(static_cast<U1&&>(y1))
  {
  }
  template<class U0, class U1>
  constexpr explicit tuple_impl(tuple_impl<U0, U1>& another) : _0(another._0), _1(another._1)
  {
  }
  template<class U0, class U1>
  constexpr explicit tuple_impl(tuple_impl<U0, U1> const& another) : _0(another._0), _1(another._1)
  {
  }
  template<class U0, class U1>
  constexpr explicit tuple_impl(tuple_impl<U0, U1>&& another) : _0(static_cast<decltype(another)>(another)._0), _1(static_cast<decltype(another)>(another)._1)
  {
  }
  template<class U0, class U1>
  constexpr explicit tuple_impl(tuple_impl<U0, U1> const&& another) : _0(static_cast<decltype(another)>(another)._0), _1(static_cast<decltype(another)>(another)._1)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
  }
};
template<class T0, class T1, class T2>
class tuple_impl<T0, T1, T2> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{} {}
  template<class U0, class U1, class U2>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2) : _0(static_cast<U0&&>(y0)), _1(static_cast<U1&&>(y1)), _2(static_cast<U2&&>(y2))
  {
  }
  template<class U0, class U1, class U2>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2>& another) : _0(another._0), _1(another._1), _2(another._2)
  {
  }
  template<class U0, class U1, class U2>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2> const& another) : _0(another._0), _1(another._1), _2(another._2)
  {
  }
  template<class U0, class U1, class U2>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2>&& another)
      : _0(static_cast<decltype(another)>(another)._0), _1(static_cast<decltype(another)>(another)._1), _2(static_cast<decltype(another)>(another)._2)
  {
  }
  template<class U0, class U1, class U2>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2> const&& another)
      : _0(static_cast<decltype(another)>(another)._0), _1(static_cast<decltype(another)>(another)._1), _2(static_cast<decltype(another)>(another)._2)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
  }
};
template<class T0, class T1, class T2, class T3>
class tuple_impl<T0, T1, T2, T3> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{} {}
  template<class U0, class U1, class U2, class U3>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3) : _0(static_cast<U0&&>(y0)), _1(static_cast<U1&&>(y1)), _2(static_cast<U2&&>(y2)), _3(static_cast<U3&&>(y3))
  {
  }
  template<class U0, class U1, class U2, class U3>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3>& another) : _0(another._0), _1(another._1), _2(another._2), _3(another._3)
  {
  }
  template<class U0, class U1, class U2, class U3>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3> const& another) : _0(another._0), _1(another._1), _2(another._2), _3(another._3)
  {
  }
  template<class U0, class U1, class U2, class U3>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3)
  {
  }
  template<class U0, class U1, class U2, class U3>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
  }
};
template<class T0, class T1, class T2, class T3, class T4>
class tuple_impl<T0, T1, T2, T3, T4> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{} {}
  template<class U0, class U1, class U2, class U3, class U4>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4)
      : _0(static_cast<U0&&>(y0)), _1(static_cast<U1&&>(y1)), _2(static_cast<U2&&>(y2)), _3(static_cast<U3&&>(y3)), _4(static_cast<U4&&>(y4))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4>& another) : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4> const& another) : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5>
class tuple_impl<T0, T1, T2, T3, T4, T5> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5)
      : _0(static_cast<U0&&>(y0)), _1(static_cast<U1&&>(y1)), _2(static_cast<U2&&>(y2)), _3(static_cast<U3&&>(y3)), _4(static_cast<U4&&>(y4)), _5(static_cast<U5&&>(y5))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5>& another) : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4), _5(another._5)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5> const& another) : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4), _5(another._5)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6>& another)
      : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4), _5(another._5), _6(another._6)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6> const& another)
      : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4), _5(another._5), _6(another._6)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7>& another)
      : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4), _5(another._5), _6(another._6), _7(another._7)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7> const& another)
      : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4), _5(another._5), _6(another._6), _7(another._7)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8>& another)
      : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4), _5(another._5), _6(another._6), _7(another._7), _8(another._8)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8> const& another)
      : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4), _5(another._5), _6(another._6), _7(another._7), _8(another._8)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9>& another)
      : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4), _5(another._5), _6(another._6), _7(another._7), _8(another._8), _9(another._9)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9> const& another)
      : _0(another._0), _1(another._1), _2(another._2), _3(another._3), _4(another._4), _5(another._5), _6(another._6), _7(another._7), _8(another._8), _9(another._9)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{}, _16{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{}, _16{}, _17{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t) : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{}, _16{}, _17{}, _18{} {}
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{}, _16{}, _17{}, _18{}, _19{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{}, _16{}, _17{}, _18{}, _19{}, _20{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{}, _16{}, _17{}, _18{}, _19{}, _20{}, _21{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21, class T22>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T22 _22;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{}, _16{}, _17{}, _18{}, _19{}, _20{}, _21{}, _22{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21, U22&& y22)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21)),
        _22(static_cast<U22&&>(y22))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
    else if constexpr (N == 22)
      return ((forward_like_t<Self, tuple_impl>)self)._22;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21, class T22, class T23>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T22 _22;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T23 _23;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{}, _16{}, _17{}, _18{}, _19{}, _20{}, _21{}, _22{}, _23{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21, U22&& y22, U23&& y23)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21)),
        _22(static_cast<U22&&>(y22)),
        _23(static_cast<U23&&>(y23))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
    else if constexpr (N == 22)
      return ((forward_like_t<Self, tuple_impl>)self)._22;
    else if constexpr (N == 23)
      return ((forward_like_t<Self, tuple_impl>)self)._23;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21, class T22, class T23, class T24>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T22 _22;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T23 _23;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T24 _24;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{}, _16{}, _17{}, _18{}, _19{}, _20{}, _21{}, _22{}, _23{}, _24{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21, U22&& y22, U23&& y23, U24&& y24)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21)),
        _22(static_cast<U22&&>(y22)),
        _23(static_cast<U23&&>(y23)),
        _24(static_cast<U24&&>(y24))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
    else if constexpr (N == 22)
      return ((forward_like_t<Self, tuple_impl>)self)._22;
    else if constexpr (N == 23)
      return ((forward_like_t<Self, tuple_impl>)self)._23;
    else if constexpr (N == 24)
      return ((forward_like_t<Self, tuple_impl>)self)._24;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21, class T22, class T23, class T24, class T25>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T22 _22;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T23 _23;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T24 _24;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T25 _25;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{}, _1{}, _2{}, _3{}, _4{}, _5{}, _6{}, _7{}, _8{}, _9{}, _10{}, _11{}, _12{}, _13{}, _14{}, _15{}, _16{}, _17{}, _18{}, _19{}, _20{}, _21{}, _22{}, _23{}, _24{}, _25{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21, U22&& y22, U23&& y23, U24&& y24, U25&& y25)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21)),
        _22(static_cast<U22&&>(y22)),
        _23(static_cast<U23&&>(y23)),
        _24(static_cast<U24&&>(y24)),
        _25(static_cast<U25&&>(y25))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
    else if constexpr (N == 22)
      return ((forward_like_t<Self, tuple_impl>)self)._22;
    else if constexpr (N == 23)
      return ((forward_like_t<Self, tuple_impl>)self)._23;
    else if constexpr (N == 24)
      return ((forward_like_t<Self, tuple_impl>)self)._24;
    else if constexpr (N == 25)
      return ((forward_like_t<Self, tuple_impl>)self)._25;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21, class T22, class T23, class T24, class T25, class T26>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T22 _22;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T23 _23;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T24 _24;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T25 _25;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T26 _26;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{},
        _1{},
        _2{},
        _3{},
        _4{},
        _5{},
        _6{},
        _7{},
        _8{},
        _9{},
        _10{},
        _11{},
        _12{},
        _13{},
        _14{},
        _15{},
        _16{},
        _17{},
        _18{},
        _19{},
        _20{},
        _21{},
        _22{},
        _23{},
        _24{},
        _25{},
        _26{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21, U22&& y22, U23&& y23, U24&& y24, U25&& y25, U26&& y26)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21)),
        _22(static_cast<U22&&>(y22)),
        _23(static_cast<U23&&>(y23)),
        _24(static_cast<U24&&>(y24)),
        _25(static_cast<U25&&>(y25)),
        _26(static_cast<U26&&>(y26))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
    else if constexpr (N == 22)
      return ((forward_like_t<Self, tuple_impl>)self)._22;
    else if constexpr (N == 23)
      return ((forward_like_t<Self, tuple_impl>)self)._23;
    else if constexpr (N == 24)
      return ((forward_like_t<Self, tuple_impl>)self)._24;
    else if constexpr (N == 25)
      return ((forward_like_t<Self, tuple_impl>)self)._25;
    else if constexpr (N == 26)
      return ((forward_like_t<Self, tuple_impl>)self)._26;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21, class T22, class T23, class T24, class T25, class T26, class T27>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T22 _22;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T23 _23;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T24 _24;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T25 _25;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T26 _26;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T27 _27;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{},
        _1{},
        _2{},
        _3{},
        _4{},
        _5{},
        _6{},
        _7{},
        _8{},
        _9{},
        _10{},
        _11{},
        _12{},
        _13{},
        _14{},
        _15{},
        _16{},
        _17{},
        _18{},
        _19{},
        _20{},
        _21{},
        _22{},
        _23{},
        _24{},
        _25{},
        _26{},
        _27{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21, U22&& y22, U23&& y23, U24&& y24, U25&& y25, U26&& y26, U27&& y27)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21)),
        _22(static_cast<U22&&>(y22)),
        _23(static_cast<U23&&>(y23)),
        _24(static_cast<U24&&>(y24)),
        _25(static_cast<U25&&>(y25)),
        _26(static_cast<U26&&>(y26)),
        _27(static_cast<U27&&>(y27))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26),
        _27(another._27)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26),
        _27(another._27)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26),
        _27(static_cast<decltype(another)>(another)._27)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26),
        _27(static_cast<decltype(another)>(another)._27)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
    else if constexpr (N == 22)
      return ((forward_like_t<Self, tuple_impl>)self)._22;
    else if constexpr (N == 23)
      return ((forward_like_t<Self, tuple_impl>)self)._23;
    else if constexpr (N == 24)
      return ((forward_like_t<Self, tuple_impl>)self)._24;
    else if constexpr (N == 25)
      return ((forward_like_t<Self, tuple_impl>)self)._25;
    else if constexpr (N == 26)
      return ((forward_like_t<Self, tuple_impl>)self)._26;
    else if constexpr (N == 27)
      return ((forward_like_t<Self, tuple_impl>)self)._27;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21, class T22, class T23, class T24, class T25, class T26, class T27, class T28>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T22 _22;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T23 _23;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T24 _24;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T25 _25;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T26 _26;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T27 _27;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T28 _28;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{},
        _1{},
        _2{},
        _3{},
        _4{},
        _5{},
        _6{},
        _7{},
        _8{},
        _9{},
        _10{},
        _11{},
        _12{},
        _13{},
        _14{},
        _15{},
        _16{},
        _17{},
        _18{},
        _19{},
        _20{},
        _21{},
        _22{},
        _23{},
        _24{},
        _25{},
        _26{},
        _27{},
        _28{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21, U22&& y22, U23&& y23, U24&& y24, U25&& y25, U26&& y26, U27&& y27,
                                U28&& y28)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21)),
        _22(static_cast<U22&&>(y22)),
        _23(static_cast<U23&&>(y23)),
        _24(static_cast<U24&&>(y24)),
        _25(static_cast<U25&&>(y25)),
        _26(static_cast<U26&&>(y26)),
        _27(static_cast<U27&&>(y27)),
        _28(static_cast<U28&&>(y28))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26),
        _27(another._27),
        _28(another._28)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26),
        _27(another._27),
        _28(another._28)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26),
        _27(static_cast<decltype(another)>(another)._27),
        _28(static_cast<decltype(another)>(another)._28)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26),
        _27(static_cast<decltype(another)>(another)._27),
        _28(static_cast<decltype(another)>(another)._28)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
    else if constexpr (N == 22)
      return ((forward_like_t<Self, tuple_impl>)self)._22;
    else if constexpr (N == 23)
      return ((forward_like_t<Self, tuple_impl>)self)._23;
    else if constexpr (N == 24)
      return ((forward_like_t<Self, tuple_impl>)self)._24;
    else if constexpr (N == 25)
      return ((forward_like_t<Self, tuple_impl>)self)._25;
    else if constexpr (N == 26)
      return ((forward_like_t<Self, tuple_impl>)self)._26;
    else if constexpr (N == 27)
      return ((forward_like_t<Self, tuple_impl>)self)._27;
    else if constexpr (N == 28)
      return ((forward_like_t<Self, tuple_impl>)self)._28;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21, class T22, class T23, class T24, class T25, class T26, class T27, class T28, class T29>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T22 _22;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T23 _23;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T24 _24;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T25 _25;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T26 _26;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T27 _27;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T28 _28;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T29 _29;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{},
        _1{},
        _2{},
        _3{},
        _4{},
        _5{},
        _6{},
        _7{},
        _8{},
        _9{},
        _10{},
        _11{},
        _12{},
        _13{},
        _14{},
        _15{},
        _16{},
        _17{},
        _18{},
        _19{},
        _20{},
        _21{},
        _22{},
        _23{},
        _24{},
        _25{},
        _26{},
        _27{},
        _28{},
        _29{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21, U22&& y22, U23&& y23, U24&& y24, U25&& y25, U26&& y26, U27&& y27,
                                U28&& y28, U29&& y29)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21)),
        _22(static_cast<U22&&>(y22)),
        _23(static_cast<U23&&>(y23)),
        _24(static_cast<U24&&>(y24)),
        _25(static_cast<U25&&>(y25)),
        _26(static_cast<U26&&>(y26)),
        _27(static_cast<U27&&>(y27)),
        _28(static_cast<U28&&>(y28)),
        _29(static_cast<U29&&>(y29))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26),
        _27(another._27),
        _28(another._28),
        _29(another._29)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26),
        _27(another._27),
        _28(another._28),
        _29(another._29)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26),
        _27(static_cast<decltype(another)>(another)._27),
        _28(static_cast<decltype(another)>(another)._28),
        _29(static_cast<decltype(another)>(another)._29)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26),
        _27(static_cast<decltype(another)>(another)._27),
        _28(static_cast<decltype(another)>(another)._28),
        _29(static_cast<decltype(another)>(another)._29)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
    else if constexpr (N == 22)
      return ((forward_like_t<Self, tuple_impl>)self)._22;
    else if constexpr (N == 23)
      return ((forward_like_t<Self, tuple_impl>)self)._23;
    else if constexpr (N == 24)
      return ((forward_like_t<Self, tuple_impl>)self)._24;
    else if constexpr (N == 25)
      return ((forward_like_t<Self, tuple_impl>)self)._25;
    else if constexpr (N == 26)
      return ((forward_like_t<Self, tuple_impl>)self)._26;
    else if constexpr (N == 27)
      return ((forward_like_t<Self, tuple_impl>)self)._27;
    else if constexpr (N == 28)
      return ((forward_like_t<Self, tuple_impl>)self)._28;
    else if constexpr (N == 29)
      return ((forward_like_t<Self, tuple_impl>)self)._29;
  }
};
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21, class T22, class T23, class T24, class T25, class T26, class T27, class T28, class T29, class T30>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T22 _22;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T23 _23;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T24 _24;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T25 _25;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T26 _26;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T27 _27;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T28 _28;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T29 _29;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T30 _30;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{},
        _1{},
        _2{},
        _3{},
        _4{},
        _5{},
        _6{},
        _7{},
        _8{},
        _9{},
        _10{},
        _11{},
        _12{},
        _13{},
        _14{},
        _15{},
        _16{},
        _17{},
        _18{},
        _19{},
        _20{},
        _21{},
        _22{},
        _23{},
        _24{},
        _25{},
        _26{},
        _27{},
        _28{},
        _29{},
        _30{}
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29, class U30>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21, U22&& y22, U23&& y23, U24&& y24, U25&& y25, U26&& y26, U27&& y27,
                                U28&& y28, U29&& y29, U30&& y30)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21)),
        _22(static_cast<U22&&>(y22)),
        _23(static_cast<U23&&>(y23)),
        _24(static_cast<U24&&>(y24)),
        _25(static_cast<U25&&>(y25)),
        _26(static_cast<U26&&>(y26)),
        _27(static_cast<U27&&>(y27)),
        _28(static_cast<U28&&>(y28)),
        _29(static_cast<U29&&>(y29)),
        _30(static_cast<U30&&>(y30))
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29, class U30>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26),
        _27(another._27),
        _28(another._28),
        _29(another._29),
        _30(another._30)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29, class U30>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26),
        _27(another._27),
        _28(another._28),
        _29(another._29),
        _30(another._30)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29, class U30>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26),
        _27(static_cast<decltype(another)>(another)._27),
        _28(static_cast<decltype(another)>(another)._28),
        _29(static_cast<decltype(another)>(another)._29),
        _30(static_cast<decltype(another)>(another)._30)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29, class U30>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26),
        _27(static_cast<decltype(another)>(another)._27),
        _28(static_cast<decltype(another)>(another)._28),
        _29(static_cast<decltype(another)>(another)._29),
        _30(static_cast<decltype(another)>(another)._30)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
    else if constexpr (N == 22)
      return ((forward_like_t<Self, tuple_impl>)self)._22;
    else if constexpr (N == 23)
      return ((forward_like_t<Self, tuple_impl>)self)._23;
    else if constexpr (N == 24)
      return ((forward_like_t<Self, tuple_impl>)self)._24;
    else if constexpr (N == 25)
      return ((forward_like_t<Self, tuple_impl>)self)._25;
    else if constexpr (N == 26)
      return ((forward_like_t<Self, tuple_impl>)self)._26;
    else if constexpr (N == 27)
      return ((forward_like_t<Self, tuple_impl>)self)._27;
    else if constexpr (N == 28)
      return ((forward_like_t<Self, tuple_impl>)self)._28;
    else if constexpr (N == 29)
      return ((forward_like_t<Self, tuple_impl>)self)._29;
    else if constexpr (N == 30)
      return ((forward_like_t<Self, tuple_impl>)self)._30;
  }
};

template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10, class T11, class T12, class T13, class T14, class T15,
         class T16, class T17, class T18, class T19, class T20, class T21, class T22, class T23, class T24, class T25, class T26, class T27, class T28, class T29, class T30,
         class T31, class... Ts>
class tuple_impl<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, Ts...> {
public:
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T0 _0;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T1 _1;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T2 _2;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T3 _3;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T4 _4;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T5 _5;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T6 _6;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T7 _7;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T8 _8;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T9 _9;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T10 _10;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T11 _11;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T12 _12;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T13 _13;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T14 _14;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T15 _15;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T16 _16;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T17 _17;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T18 _18;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T19 _19;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T20 _20;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T21 _21;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T22 _22;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T23 _23;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T24 _24;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T25 _25;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T26 _26;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T27 _27;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T28 _28;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T29 _29;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T30 _30;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS T31 _31;
  YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS tuple_impl<Ts...> rest;
  constexpr explicit tuple_impl() = default;
  constexpr explicit tuple_impl(value_initialize_t)
      : _0{},
        _1{},
        _2{},
        _3{},
        _4{},
        _5{},
        _6{},
        _7{},
        _8{},
        _9{},
        _10{},
        _11{},
        _12{},
        _13{},
        _14{},
        _15{},
        _16{},
        _17{},
        _18{},
        _19{},
        _20{},
        _21{},
        _22{},
        _23{},
        _24{},
        _25{},
        _26{},
        _27{},
        _28{},
        _29{},
        _30{},
        _31{},
        rest(value_initialize)
  {
  }

  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29, class U30,
           class U31, class... Us>
  constexpr explicit tuple_impl(U0&& y0, U1&& y1, U2&& y2, U3&& y3, U4&& y4, U5&& y5, U6&& y6, U7&& y7, U8&& y8, U9&& y9, U10&& y10, U11&& y11, U12&& y12, U13&& y13, U14&& y14,
                                U15&& y15, U16&& y16, U17&& y17, U18&& y18, U19&& y19, U20&& y20, U21&& y21, U22&& y22, U23&& y23, U24&& y24, U25&& y25, U26&& y26, U27&& y27,
                                U28&& y28, U29&& y29, U30&& y30, U31&& y31, Us... ys)
      : _0(static_cast<U0&&>(y0)),
        _1(static_cast<U1&&>(y1)),
        _2(static_cast<U2&&>(y2)),
        _3(static_cast<U3&&>(y3)),
        _4(static_cast<U4&&>(y4)),
        _5(static_cast<U5&&>(y5)),
        _6(static_cast<U6&&>(y6)),
        _7(static_cast<U7&&>(y7)),
        _8(static_cast<U8&&>(y8)),
        _9(static_cast<U9&&>(y9)),
        _10(static_cast<U10&&>(y10)),
        _11(static_cast<U11&&>(y11)),
        _12(static_cast<U12&&>(y12)),
        _13(static_cast<U13&&>(y13)),
        _14(static_cast<U14&&>(y14)),
        _15(static_cast<U15&&>(y15)),
        _16(static_cast<U16&&>(y16)),
        _17(static_cast<U17&&>(y17)),
        _18(static_cast<U18&&>(y18)),
        _19(static_cast<U19&&>(y19)),
        _20(static_cast<U20&&>(y20)),
        _21(static_cast<U21&&>(y21)),
        _22(static_cast<U22&&>(y22)),
        _23(static_cast<U23&&>(y23)),
        _24(static_cast<U24&&>(y24)),
        _25(static_cast<U25&&>(y25)),
        _26(static_cast<U26&&>(y26)),
        _27(static_cast<U27&&>(y27)),
        _28(static_cast<U28&&>(y28)),
        _29(static_cast<U29&&>(y29)),
        _30(static_cast<U30&&>(y30)),
        _31(static_cast<U31&&>(y31)),
        rest(static_cast<Us&&>(ys)...)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29, class U30,
           class U31, class... Us>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31>& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26),
        _27(another._27),
        _28(another._28),
        _29(another._29),
        _30(another._30),
        _31(another._31),
        rest(another.rest)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29, class U30,
           class U31, class... Us>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28,
                                           U29, U30, U31> const& another)
      : _0(another._0),
        _1(another._1),
        _2(another._2),
        _3(another._3),
        _4(another._4),
        _5(another._5),
        _6(another._6),
        _7(another._7),
        _8(another._8),
        _9(another._9),
        _10(another._10),
        _11(another._11),
        _12(another._12),
        _13(another._13),
        _14(another._14),
        _15(another._15),
        _16(another._16),
        _17(another._17),
        _18(another._18),
        _19(another._19),
        _20(another._20),
        _21(another._21),
        _22(another._22),
        _23(another._23),
        _24(another._24),
        _25(another._25),
        _26(another._26),
        _27(another._27),
        _28(another._28),
        _29(another._29),
        _30(another._30),
        _31(another._31),
        rest(another.rest)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29, class U30,
           class U31, class... Us>
  constexpr explicit tuple_impl(
      tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31>&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26),
        _27(static_cast<decltype(another)>(another)._27),
        _28(static_cast<decltype(another)>(another)._28),
        _29(static_cast<decltype(another)>(another)._29),
        _30(static_cast<decltype(another)>(another)._30),
        _31(static_cast<decltype(another)>(another)._31),
        rest(static_cast<decltype(another)>(another).rest)
  {
  }
  template<class U0, class U1, class U2, class U3, class U4, class U5, class U6, class U7, class U8, class U9, class U10, class U11, class U12, class U13, class U14, class U15,
           class U16, class U17, class U18, class U19, class U20, class U21, class U22, class U23, class U24, class U25, class U26, class U27, class U28, class U29, class U30,
           class U31, class... Us>
  constexpr explicit tuple_impl(tuple_impl<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28,
                                           U29, U30, U31> const&& another)
      : _0(static_cast<decltype(another)>(another)._0),
        _1(static_cast<decltype(another)>(another)._1),
        _2(static_cast<decltype(another)>(another)._2),
        _3(static_cast<decltype(another)>(another)._3),
        _4(static_cast<decltype(another)>(another)._4),
        _5(static_cast<decltype(another)>(another)._5),
        _6(static_cast<decltype(another)>(another)._6),
        _7(static_cast<decltype(another)>(another)._7),
        _8(static_cast<decltype(another)>(another)._8),
        _9(static_cast<decltype(another)>(another)._9),
        _10(static_cast<decltype(another)>(another)._10),
        _11(static_cast<decltype(another)>(another)._11),
        _12(static_cast<decltype(another)>(another)._12),
        _13(static_cast<decltype(another)>(another)._13),
        _14(static_cast<decltype(another)>(another)._14),
        _15(static_cast<decltype(another)>(another)._15),
        _16(static_cast<decltype(another)>(another)._16),
        _17(static_cast<decltype(another)>(another)._17),
        _18(static_cast<decltype(another)>(another)._18),
        _19(static_cast<decltype(another)>(another)._19),
        _20(static_cast<decltype(another)>(another)._20),
        _21(static_cast<decltype(another)>(another)._21),
        _22(static_cast<decltype(another)>(another)._22),
        _23(static_cast<decltype(another)>(another)._23),
        _24(static_cast<decltype(another)>(another)._24),
        _25(static_cast<decltype(another)>(another)._25),
        _26(static_cast<decltype(another)>(another)._26),
        _27(static_cast<decltype(another)>(another)._27),
        _28(static_cast<decltype(another)>(another)._28),
        _29(static_cast<decltype(another)>(another)._29),
        _30(static_cast<decltype(another)>(another)._30),
        _31(static_cast<decltype(another)>(another)._31),
        rest(static_cast<decltype(another)>(another).rest)
  {
  }
  template<std::size_t N, class Self>
  constexpr decltype(auto) get(this Self&& self) noexcept
  {
    if constexpr (N == 0)
      return ((forward_like_t<Self, tuple_impl>)self)._0;
    else if constexpr (N == 1)
      return ((forward_like_t<Self, tuple_impl>)self)._1;
    else if constexpr (N == 2)
      return ((forward_like_t<Self, tuple_impl>)self)._2;
    else if constexpr (N == 3)
      return ((forward_like_t<Self, tuple_impl>)self)._3;
    else if constexpr (N == 4)
      return ((forward_like_t<Self, tuple_impl>)self)._4;
    else if constexpr (N == 5)
      return ((forward_like_t<Self, tuple_impl>)self)._5;
    else if constexpr (N == 6)
      return ((forward_like_t<Self, tuple_impl>)self)._6;
    else if constexpr (N == 7)
      return ((forward_like_t<Self, tuple_impl>)self)._7;
    else if constexpr (N == 8)
      return ((forward_like_t<Self, tuple_impl>)self)._8;
    else if constexpr (N == 9)
      return ((forward_like_t<Self, tuple_impl>)self)._9;
    else if constexpr (N == 10)
      return ((forward_like_t<Self, tuple_impl>)self)._10;
    else if constexpr (N == 11)
      return ((forward_like_t<Self, tuple_impl>)self)._11;
    else if constexpr (N == 12)
      return ((forward_like_t<Self, tuple_impl>)self)._12;
    else if constexpr (N == 13)
      return ((forward_like_t<Self, tuple_impl>)self)._13;
    else if constexpr (N == 14)
      return ((forward_like_t<Self, tuple_impl>)self)._14;
    else if constexpr (N == 15)
      return ((forward_like_t<Self, tuple_impl>)self)._15;
    else if constexpr (N == 16)
      return ((forward_like_t<Self, tuple_impl>)self)._16;
    else if constexpr (N == 17)
      return ((forward_like_t<Self, tuple_impl>)self)._17;
    else if constexpr (N == 18)
      return ((forward_like_t<Self, tuple_impl>)self)._18;
    else if constexpr (N == 19)
      return ((forward_like_t<Self, tuple_impl>)self)._19;
    else if constexpr (N == 20)
      return ((forward_like_t<Self, tuple_impl>)self)._20;
    else if constexpr (N == 21)
      return ((forward_like_t<Self, tuple_impl>)self)._21;
    else if constexpr (N == 22)
      return ((forward_like_t<Self, tuple_impl>)self)._22;
    else if constexpr (N == 23)
      return ((forward_like_t<Self, tuple_impl>)self)._23;
    else if constexpr (N == 24)
      return ((forward_like_t<Self, tuple_impl>)self)._24;
    else if constexpr (N == 25)
      return ((forward_like_t<Self, tuple_impl>)self)._25;
    else if constexpr (N == 26)
      return ((forward_like_t<Self, tuple_impl>)self)._26;
    else if constexpr (N == 27)
      return ((forward_like_t<Self, tuple_impl>)self)._27;
    else if constexpr (N == 28)
      return ((forward_like_t<Self, tuple_impl>)self)._28;
    else if constexpr (N == 29)
      return ((forward_like_t<Self, tuple_impl>)self)._29;
    else if constexpr (N == 30)
      return ((forward_like_t<Self, tuple_impl>)self)._30;
    else if constexpr (N == 31)
      return ((forward_like_t<Self, tuple_impl>)self)._31;
    else
      return ((forward_like_t<Self, tuple_impl>)self).rest.template get<N - 32>();
  }
};
}  // namespace detail

}  // namespace yk::alloy

#endif  // YK_ALLOY_TUPLE_DETAIL_TUPLE_IMPL_32_HPP