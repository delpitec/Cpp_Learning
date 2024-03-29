cmake_minimum_required(VERSION 3.16.3)
project(cppBook VERSION 1.0.0)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_1_proj_1)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_1_proj_2)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_1_proj_3)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_1_proj_4)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_1_proj_5)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_1_proj_6)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_2_proj_1)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_2_proj_2)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_3_proj_1)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_3_proj_2)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_3_proj_3)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_3_proj_4)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_3_proj_5)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_3_proj_6)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_3_proj_7)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_4_proj_1)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_4_proj_2)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_4_proj_3)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_4_proj_4)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_4_proj_5)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_4_proj_6)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_4_proj_7)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_4_proj_8)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_4_proj_9)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_4_proj_10)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_5_proj_1)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_5_proj_2)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_5_proj_3)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_5_proj_4)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_5_proj_5)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_5_proj_6)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/chap_5_proj_7)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lib/calculator)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lib/ihm)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lib/array)

set (LESSON_ID_LIST 
    ${CHAP_1_PROJ_1_LESSON_NAME}
    ${CHAP_1_PROJ_2_LESSON_NAME}
    ${CHAP_1_PROJ_3_LESSON_NAME}
    ${CHAP_1_PROJ_4_LESSON_NAME}
    ${CHAP_1_PROJ_5_LESSON_NAME}
    ${CHAP_1_PROJ_6_LESSON_NAME}
    ${CHAP_2_PROJ_1_LESSON_NAME}
    ${CHAP_2_PROJ_2_LESSON_NAME}
    ${CHAP_3_PROJ_1_LESSON_NAME}
    ${CHAP_3_PROJ_2_LESSON_NAME}
    ${CHAP_3_PROJ_3_LESSON_NAME}
    ${CHAP_3_PROJ_4_LESSON_NAME}
    ${CHAP_3_PROJ_5_LESSON_NAME}
    ${CHAP_3_PROJ_6_LESSON_NAME}
    ${CHAP_3_PROJ_7_LESSON_NAME}
    ${CHAP_4_PROJ_1_LESSON_NAME}
    ${CHAP_4_PROJ_2_LESSON_NAME}
    ${CHAP_4_PROJ_3_LESSON_NAME}
    ${CHAP_4_PROJ_4_LESSON_NAME}
    ${CHAP_4_PROJ_5_LESSON_NAME}
    ${CHAP_4_PROJ_6_LESSON_NAME}
    ${CHAP_4_PROJ_7_LESSON_NAME}
    ${CHAP_4_PROJ_8_LESSON_NAME}
    ${CHAP_4_PROJ_9_LESSON_NAME}
    ${CHAP_4_PROJ_10_LESSON_NAME}
    ${CHAP_5_PROJ_1_LESSON_NAME}
    ${CHAP_5_PROJ_2_LESSON_NAME}
    ${CHAP_5_PROJ_3_LESSON_NAME}
    ${CHAP_5_PROJ_4_LESSON_NAME}
    ${CHAP_5_PROJ_5_LESSON_NAME}
    ${CHAP_5_PROJ_6_LESSON_NAME}
    ${CHAP_5_PROJ_7_LESSON_NAME}
)

# Check if cache variable that stores project identification is defined 
if (NOT DEFINED CACHE{LESSON_ID})
    set(LESSON_ID ${CHAP_1_PROJ_1_LESSON_NAME} CACHE STRING "Project identification to be build")    
    message (WARNING "No project ID lesson set. Using ${CHAP_1_PROJ_1_LESSON_NAME} as default.\                       
                     \n   To choose another lesson, use -D flag\
                     \n   Ex: $ cmake -DLESSON_ID=chap_1_proj_2_lesson ..")
else()
    # Dummy line to avoid LESSON_IN unused warning
    set (LESSON_ID)
    
    # Check if the cache variable value that stores project identification is valid 
    set (FIND_LESSON_ID_LIST_INDEX)
    list(FIND LESSON_ID_LIST $CACHE{LESSON_ID} FIND_LESSON_ID_LIST_INDEX)
    
    # is valid
    if (FIND_LESSON_ID_LIST_INDEX GREATER_EQUAL 0)
        message(STATUS "Building $CACHE{LESSON_ID} project\
                       \n   To choose another lesson, use -D flag\
                       \n   Ex: $ cmake -DLESSON_ID=chap_1_proj_2_lesson ..")
    
    # is not valid
    else()
        message(FATAL_ERROR "Project ID lesson invalid value\
                       \n Set a lesson using -D flag\
                       \n Ex: $ cmake -DLESSON_ID=chap_1_proj_2_lesson")
    endif()
endif()

if ($CACHE{LESSON_ID} STREQUAL ${CHAP_1_PROJ_1_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_1_PROJ_1_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_1_PROJ_1_LESSON_INCLUDE_DIRECTORY_PATH}) 
    set (LESSON_LIBS lib_calculator)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_1_PROJ_2_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_1_PROJ_2_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_1_PROJ_2_LESSON_INCLUDE_DIRECTORY_PATH}) 
    set (LESSON_LIBS lib_calculator)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_1_PROJ_3_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_1_PROJ_3_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_1_PROJ_3_LESSON_INCLUDE_DIRECTORY_PATH}) 
    set (LESSON_LIBS lib_calculator)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_1_PROJ_4_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_1_PROJ_4_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_1_PROJ_4_LESSON_INCLUDE_DIRECTORY_PATH}) 
    set (LESSON_LIBS lib_calculator)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_1_PROJ_5_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_1_PROJ_5_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_1_PROJ_5_LESSON_INCLUDE_DIRECTORY_PATH}) 
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_1_PROJ_6_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_1_PROJ_6_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_1_PROJ_6_LESSON_INCLUDE_DIRECTORY_PATH}) 
    set (LESSON_LIBS lib_calculator)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_2_PROJ_1_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_2_PROJ_1_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_2_PROJ_1_LESSON_INCLUDE_DIRECTORY_PATH}) 
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_2_PROJ_2_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_2_PROJ_2_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_2_PROJ_2_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_3_PROJ_1_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_3_PROJ_1_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_3_PROJ_1_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_3_PROJ_2_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_3_PROJ_2_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_3_PROJ_2_LESSON_INCLUDE_DIRECTORY_PATH})
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_3_PROJ_3_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_3_PROJ_3_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_3_PROJ_3_LESSON_INCLUDE_DIRECTORY_PATH})
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_3_PROJ_4_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_3_PROJ_4_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_3_PROJ_4_LESSON_INCLUDE_DIRECTORY_PATH})
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_3_PROJ_5_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_3_PROJ_5_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_3_PROJ_5_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_3_PROJ_6_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_3_PROJ_6_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_3_PROJ_6_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_3_PROJ_7_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_3_PROJ_7_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_3_PROJ_7_LESSON_INCLUDE_DIRECTORY_PATH})
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_4_PROJ_1_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_4_PROJ_1_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_4_PROJ_1_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_4_PROJ_2_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_4_PROJ_2_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_4_PROJ_2_LESSON_INCLUDE_DIRECTORY_PATH})
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_4_PROJ_3_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_4_PROJ_3_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_4_PROJ_3_LESSON_INCLUDE_DIRECTORY_PATH})
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_4_PROJ_4_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_4_PROJ_4_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_4_PROJ_4_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_4_PROJ_5_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_4_PROJ_5_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_4_PROJ_5_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_4_PROJ_6_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_4_PROJ_6_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_4_PROJ_6_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_4_PROJ_7_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_4_PROJ_7_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_4_PROJ_7_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_4_PROJ_8_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_4_PROJ_8_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_4_PROJ_8_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_4_PROJ_9_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_4_PROJ_9_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_4_PROJ_9_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_4_PROJ_10_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_4_PROJ_10_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_4_PROJ_10_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_5_PROJ_1_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_5_PROJ_1_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_5_PROJ_1_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_array)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_5_PROJ_2_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_5_PROJ_2_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_5_PROJ_2_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_array)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_5_PROJ_3_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_5_PROJ_3_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_5_PROJ_3_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_calculator lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_5_PROJ_4_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_5_PROJ_4_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_5_PROJ_4_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_array lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_5_PROJ_5_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_5_PROJ_5_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_5_PROJ_5_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_array lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_5_PROJ_6_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_5_PROJ_6_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_5_PROJ_6_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_array lib_ihm)
elseif ($CACHE{LESSON_ID} STREQUAL ${CHAP_5_PROJ_7_LESSON_NAME})
    set (LESSON_SOURCE_FILES ${CHAP_5_PROJ_7_LESSON_SOURCE_FILES})
    set (LESSON_INCLUDE_DIRECTORY_PATH ${CHAP_5_PROJ_7_LESSON_INCLUDE_DIRECTORY_PATH})
    set (LESSON_LIBS lib_array lib_ihm)
endif()

# All warnings treated as errors and treat unused variables as error
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wunused-variable")

# Links the executable  
add_executable(
    $CACHE{LESSON_ID}
    ${LESSON_SOURCE_FILES}
)

# Add include path to target executable
target_include_directories($CACHE{LESSON_ID} PRIVATE ${LESSON_INCLUDE_DIRECTORY_PATH})

# Link target executable lesson to Boost library
target_link_libraries(
    $CACHE{LESSON_ID} 
    ${LESSON_LIBS}
)
