#cmake_minimum_required(VERSION 3.22.1)
cmake_minimum_required(VERSION 3.10.2)
project(program_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(program_1 prog1main.cpp prog1_functions.cpp prog1_functions.hpp)
add_executable(test1 test1.c)
add_executable(test2 test2.c)
target_link_libraries(test2 m)
add_executable(test3 test3.c)
add_executable(test4 test4.c)
add_executable(test5 test5.c)
