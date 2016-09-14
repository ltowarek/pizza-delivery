cmake_minimum_required(VERSION 3.4)
project(pizza_delivery)

add_subdirectory(googletest)

add_executable(pizza_delivery src/main.cpp)

add_executable(pizza_delivery_test tests/test.cpp)
target_include_directories(pizza_delivery_test PUBLIC googletest/googletest/include)
target_link_libraries(pizza_delivery_test gtest gtest_main)

add_test(NAME pizza_delivery_test COMMAND pizza_delivery_test)
