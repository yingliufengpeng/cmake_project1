# 让文件路径自动相对于 animal/ 目录
set(_animal_dir ${CMAKE_CURRENT_LIST_DIR})

message("current dir is ${_animal_dir}")

set(animal_srcs
        ${_animal_dir}/Dog.h
        ${_animal_dir}/Dog.cpp
 )
