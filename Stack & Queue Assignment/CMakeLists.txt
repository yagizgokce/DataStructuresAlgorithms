cmake_minimum_required(VERSION 3.19)
project(palindrome)

set(CMAKE_CXX_STANDARD 14)

add_executable(palindrome main.cpp Queue.h queue.cpp stack.cpp Stack.h)