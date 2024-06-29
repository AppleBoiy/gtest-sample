cmake_minimum_required(VERSION 3.10)
project(CalculatorTest)

set(CMAKE_CXX_STANDARD 11)

# Add Google Test
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

# Add the source files
add_executable(CalculatorTest calculator.cpp test_calculator.cpp)

# Link Google Test libraries
target_link_libraries(CalculatorTest gtest gtest_main)
