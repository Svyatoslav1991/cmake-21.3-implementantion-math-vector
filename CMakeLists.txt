cmake_minimum_required(VERSION 3.15)
project("3_implementation_math_vector" VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(3_implementation_math_vector include/functions.h include/mathvector.h src/functions.cpp src/main.cpp src/mathvector.cpp)
target_include_directories(3_implementation_math_vector PUBLIC include)