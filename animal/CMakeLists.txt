# 当前目录是 animal/
set(animal_srcs
        ${CMAKE_CURRENT_SOURCE_DIR}/Dog.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Dog.h
        PARENT_SCOPE    # ⭐ 关键：把变量传回上层
)

