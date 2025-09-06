cmake_minimum_required(VERSION 3.23)

project(alloy LANGUAGES CXX)

option(YK_ALLOY_BUILD_TESTING "build testing" ${PROJECT_IS_TOP_LEVEL})

add_library(alloy INTERFACE)

target_compile_features(alloy INTERFACE cxx_std_23)

file(GLOB_RECURSE YK_ALLOY_HEADERS CONFIGURE_DEPENDS include/*)

target_sources(
    alloy
    INTERFACE FILE_SET HEADERS BASE_DIRS include FILES ${YK_ALLOY_HEADERS}
)

find_package(Boost CONFIG COMPONENTS unit_test_framework)

if(YK_ALLOY_BUILD_TESTING)
    if(Boost_unit_test_framework_FOUND)
        add_subdirectory(test EXCLUDE_FROM_ALL)
    endif()
endif()
