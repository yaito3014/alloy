find_package(Boost CONFIG REQUIRED COMPONENTS fusion unit_test_framework)

add_executable(yk_alloy_test main.cpp)

target_link_libraries(
    yk_alloy_test
    PRIVATE alloy Boost::fusion Boost::unit_test_framework
)
