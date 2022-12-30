# Set 1st chapter / 2nd project ID
set (CHAP_1_PROJ_2_LESSON_NAME chap_1_proj_2_lesson PARENT_SCOPE) 

# Set a list with all project files
file (GLOB_RECURSE FILE_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
set (CHAP_1_PROJ_2_LESSON_SOURCE_FILES ${FILE_LIST} PARENT_SCOPE)

# Set a variable with include files path
set (CHAP_1_PROJ_2_LESSON_INCLUDE_DIRECTORY_PATH ${CMAKE_CURRENT_SOURCE_DIR}/inc PARENT_SCOPE)

