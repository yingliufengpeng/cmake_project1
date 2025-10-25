
add_library(AnimalLib2 OBJECT
        Cat.cpp
        Cat.h
)

target_include_directories(AnimalLib2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


message("current dir is ${CMAKE_CURRENT_SOURCE_DIR}")