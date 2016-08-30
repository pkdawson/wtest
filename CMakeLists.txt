cmake_minimum_required(VERSION 2.8)

project(wtest)
set(wtest_VERSION_MAJOR 0)
set(wtest_VERSION_MINOR 1)
set(wtest_VERSION_PATCH 0)

include_directories(deps/include)

add_executable(wtest main.cpp)
add_executable(wtest_suite test.cpp)
