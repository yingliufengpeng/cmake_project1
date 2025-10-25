cmake_minimum_required(VERSION 3.20)
project(CMakeProject1)

set(USE_DEBUG  "on")

message("CMake Version is ${CMAKE_VERSION} --- ${USE_DEBUG}")

add_executable(Hello hello.cpp)
set(USE_DEBUG "off")
message("CMake Version is ${CMAKE_VERSION} --- ${USE_DEBUG}")


set(M_LIST a1 a2 a3)
message("CMake Version is ${CMAKE_VERSION} --- ${M_LIST}")
set(M_LIST ${M_LIST} a4 a5)
message("CMake Version is ${CMAKE_VERSION} --- ${M_LIST}")
list(APPEND M_LIST "a8" "a9")
message("CMake Version is ${CMAKE_VERSION} --- ${M_LIST}")

# print env path  variable
message("env path is " "$ENV{PATH}")

# print env cxx  variable
set(ENV{CXX} "c++")
message("env cxx is " "$ENV{CXX}")
unset(USE_DEBUG)

list(APPEND port p1 p2 p3)
list(LENGTH port  port_len)
message("port is ${port} len(port) is ${port_len}")

list(FIND port p2 p_index)
message("index is ${p_index}")

list(REMOVE_AT port 0)
message("port is ${port}")

list(REMOVE_ITEM port p3)
message("port is ${port}")
