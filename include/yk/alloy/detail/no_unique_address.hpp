#ifndef YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS_HPP
#define YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS_HPP

// <https://devblogs.microsoft.com/cppblog/msvc-cpp20-and-the-std-cpp20-switch/#c++20-[[no_unique_address]]>

#ifdef _MSC_VER

#  if _MSC_VER < 1929  // VS 2019 v16.9 or before

#    error "Too old MSVC version; we don't support this because it leads to ODR violation regarding the existence of [[(msvc::)no_unique_address]]"

#  elifdef __INTELLISENSE__  // Memory Layout view shows wrong layout without this workaround

#    define YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS [[msvc::no_unique_address, no_unique_address]]

#  else

#    define YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS [[msvc::no_unique_address]]

#  endif

#else  // other compilers

#  define YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS [[no_unique_address]]

#endif

#endif  // YK_ALLOY_DETAIL_NO_UNIQUE_ADDRESS_HPP
