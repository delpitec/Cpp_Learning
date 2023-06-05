# Creates a library
add_library(
    lib_ihm
    src/input.cpp
    src/output.cpp 
)

target_include_directories(lib_ihm PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)