cmake_minimum_required(VERSION 2.8)

project(wtest)
set(wtest_VERSION_MAJOR 0)
set(wtest_VERSION_MINOR 1)
set(wtest_VERSION_PATCH 0)

include_directories(opt/include)

add_executable(wtest main.cpp)
add_executable(wtest_suite test.cpp)

set_property(TARGET wtest PROPERTY CXX_STANDARD 14)
set_property(TARGET wtest_suite PROPERTY CXX_STANDARD 14)
set_property(TARGET wtest PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET wtest_suite PROPERTY CXX_STANDARD_REQUIRED ON)
