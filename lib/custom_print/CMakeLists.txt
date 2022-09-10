# Creates a library
add_library(
    lib_custom_print
    src/custom_print.cpp  
)

target_include_directories(lib_custom_print PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)