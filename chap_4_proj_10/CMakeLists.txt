# Set 4th chapter / 10th project ID
set (CHAP_4_PROJ_10_LESSON_NAME chap_4_proj_10_lesson PARENT_SCOPE) 

# Set a list with all project files
file (GLOB_RECURSE FILE_LIST 
    ${CMAKE_CURRENT_SOURCE_DIR}/../chap_4_proj_4/src/functions.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../chap_4_proj_5/src/functions.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../chap_4_proj_7/src/functions.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../chap_4_proj_8/src/functions.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)
set (CHAP_4_PROJ_10_LESSON_SOURCE_FILES ${FILE_LIST} PARENT_SCOPE)

# Set a variable with include files path
set (CHAP_4_PROJ_10_LESSON_INCLUDE_DIRECTORY_PATH 
    ${CMAKE_CURRENT_SOURCE_DIR}/../chap_4_proj_4/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/../chap_4_proj_5/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/../chap_4_proj_7/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/../chap_4_proj_8/inc
    PARENT_SCOPE
)