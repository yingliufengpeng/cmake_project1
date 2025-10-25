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

set(USE_LOG TRUE)
if (USE_LOG)
    message("logging on")
else ()
    message("logging off")
endif()


if (1 LESS 2)
    message("1 LESS 2")
endif ()


if ("ok" LESS 1233)
message("ok LESS 1233")
endif ()

if (1 EQUAL "2")
    message("1 EQUAL 2")
endif ()

if (2 EQUAL "2")
    message("2 EQUAL 2")
endif ()

foreach (i RANGE 1 10)
    message("i == ${i}")
endforeach ()

set(MY_LIST 1 2 3 owl git)

foreach (e IN LISTS MY_LIST)
    message("e == ${e}")
endforeach ()

set(L1 one two three four)
set(L2 1 2 3 4 )

foreach (num IN ZIP_LISTS L1 L2)
    message("num is ${num_0}  --- ${num_1}")
endforeach ()

# 函数的作用域,不会修改原始的参数的数据
function(demo1 a b)
    message("fun_name is ${CMAKE_CURRENT_FUNCTION}")
    message("ARGV0 ${ARGV0} ARGV1 ${ARGV1} ")
    set(a 44)
    set(${a} 34)
    message("a is ${a}")
endfunction()

demo1(1 3)

set(argv1 "first value")
set(argv2 "second value")
demo1(${argv1} ${argv2})

message("argv1 is ${argv1}")

