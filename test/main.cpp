#define BOOST_TEST_MODULE yk_alloy_test
#include <boost/test/unit_test.hpp>

#include <yk/alloy.hpp>

#include <boost/fusion/container/vector.hpp>

#include <type_traits>

struct S {
  int a;
  float f;
  double d;
  int& lref;
  int const& lcref;
  int&& rref;
  int const&& rcref;
};

template<>
struct yk::alloy::adaptor<S> {
  using getters = yk::alloy::non_type_list<&S::a,                                                                 // pointer to member
                                           &S::f,                                                                 // pointer to member
                                           []<class S_>(S_&& s) -> auto&& { return std::forward<S_>(s).d; },      // getter for `double` member
                                           []<class S_>(S_&& s) -> auto&& { return std::forward<S_>(s).lref; },   // getter for `int&` member
                                           []<class S_>(S_&& s) -> auto&& { return std::forward<S_>(s).lcref; },  // getter for `int const&` member
                                           []<class S_>(S_&& s) -> auto&& { return std::move(s.lref); },          // moving getter for `int&` member
                                           []<class S_>(S_&& s) -> auto&& { return std::move(s.lcref); },         // moving getter for `int const&` member
                                           []<class S_>(S_&& s) -> auto&& { return std::forward<S_>(s).rref; },   // getter for `int&&` member
                                           []<class S_>(S_&& s) -> auto&& { return std::forward<S_>(s).rcref; },  // getter for `int const&&` member
                                           []<class S_>(S_&& s) -> auto&& { return std::move(s.rref); },          // moving getter for `int&&` member
                                           []<class S_>(S_&& s) -> auto&& { return std::move(s.rcref); }          // moving getter for `int const&&` member
                                           >;
};

BOOST_AUTO_TEST_SUITE(alloy_main)

BOOST_AUTO_TEST_CASE(adapt)
{
  static_assert(yk::alloy::tuple_like<S>);
  static_assert(yk::alloy::result_of::size_v<S> == 11);

  static_assert(std::is_same_v<yk::alloy::result_of::get_t<0, S>, int&&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<1, S>, float&&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<2, S>, double&&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<3, S>, int&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<4, S>, int const&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<5, S>, int&&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<6, S>, int const&&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<7, S>, int&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<8, S>, int const&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<9, S>, int&&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<10, S>, int const&&>);
}

BOOST_AUTO_TEST_CASE(tuple)
{
  using Tuple = yk::alloy::tuple<int, float>;
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<0, Tuple>, int&&>);
  static_assert(std::is_same_v<yk::alloy::result_of::get_t<1, Tuple>, float&&>);

  {
    Tuple t(42, 3.14f);
    BOOST_TEST(t._0 == 42);
    BOOST_TEST(t._1 == 3.14f);
    BOOST_TEST(t.get<0>() == 42);
    BOOST_TEST(t.get<1>() == 3.14f);
    BOOST_TEST(get<0>(t) == 42);
    BOOST_TEST(get<1>(t) == 3.14f);
  }

  {
    Tuple t(3.14f, 42);
    BOOST_TEST(t._0 == 3);
    BOOST_TEST(t._1 == 42.f);
    BOOST_TEST(t.get<0>() == 3);
    BOOST_TEST(t.get<1>() == 42.f);
    BOOST_TEST(get<0>(t) == 3);
    BOOST_TEST(get<1>(t) == 42.f);
  }

  static_assert(std::is_constructible_v<yk::alloy::tuple<int>, yk::alloy::tuple<float>&>);
  static_assert(std::is_constructible_v<yk::alloy::tuple<int>, yk::alloy::tuple<float> const&>);
  static_assert(std::is_constructible_v<yk::alloy::tuple<int>, yk::alloy::tuple<float>&&>);
  static_assert(std::is_constructible_v<yk::alloy::tuple<int>, yk::alloy::tuple<float> const&&>);

  static_assert(std::is_constructible_v<yk::alloy::tuple<int, float>, yk::alloy::tuple<float, int>&>);
  static_assert(std::is_constructible_v<yk::alloy::tuple<int, float>, yk::alloy::tuple<float, int> const&>);
  static_assert(std::is_constructible_v<yk::alloy::tuple<int, float>, yk::alloy::tuple<float, int>&&>);
  static_assert(std::is_constructible_v<yk::alloy::tuple<int, float>, yk::alloy::tuple<float, int> const&&>);
}

BOOST_AUTO_TEST_SUITE_END()
