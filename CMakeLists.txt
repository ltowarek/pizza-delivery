cmake_minimum_required(VERSION 3.4)
project(pizza_delivery)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(googletest)

add_executable(pizza_delivery src/main.cpp src/pizza_delivery.cpp)
target_include_directories(pizza_delivery PUBLIC include)

add_executable(pizza_delivery_test tests/test.cpp src/pizza_delivery.cpp)
target_include_directories(pizza_delivery_test PUBLIC googletest/googletest/include include)
target_link_libraries(pizza_delivery_test gtest gtest_main)

enable_testing()
add_test(NAME pizza_delivery_test COMMAND pizza_delivery_test)
