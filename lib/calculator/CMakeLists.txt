# Creates a library
add_library(
    lib_calculator
    src/calculator.cpp  
)

target_include_directories(lib_calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)