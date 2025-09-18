find_package(Boost CONFIG REQUIRED COMPONENTS unit_test_framework)

add_executable(yk_alloy_test main.cpp)

target_link_libraries(yk_alloy_test PRIVATE alloy Boost::unit_test_framework)
