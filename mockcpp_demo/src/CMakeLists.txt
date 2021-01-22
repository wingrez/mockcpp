
include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

add_library(lib_sum sum.cpp)

add_executable(main main.cpp)

target_link_libraries(main lib_sum mockcpp)