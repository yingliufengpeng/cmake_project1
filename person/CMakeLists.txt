
file(GLOB SRCS ${CMAKE_CURRENT_SOURCE_DIR}/*.h  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(AnimalLib3 ${SRCS})


target_include_directories(AnimalLib3 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

