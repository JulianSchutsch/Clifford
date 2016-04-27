add_executable(test_cliff testcliff.cpp)
target_link_libraries(test_cliff "boost_unit_test_framework")
add_test(test_cliff test_cliff)
