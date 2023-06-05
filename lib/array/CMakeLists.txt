# Creates a library
add_library(
    lib_array
    array.cpp  
)

target_include_directories(lib_array PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})