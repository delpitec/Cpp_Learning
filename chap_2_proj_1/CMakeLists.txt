# Set 2nd chapter / 1st project ID
set (CHAP_2_PROJ_1_LESSON_NAME chap_2_proj_1_lesson PARENT_SCOPE) 

# Set a list with all project files
file (GLOB_RECURSE FILE_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
set (CHAP_2_PROJ_1_LESSON_SOURCE_FILES ${FILE_LIST} PARENT_SCOPE)

# Set a variable with include files path
set (CHAP_2_PROJ_1_LESSON_INCLUDE_DIRECTORY_PATH ${CMAKE_CURRENT_SOURCE_DIR}/inc PARENT_SCOPE)