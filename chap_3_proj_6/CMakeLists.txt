# Set 3rd chapter / 6th project ID
set (CHAP_3_PROJ_6_LESSON_NAME chap_3_proj_6_lesson PARENT_SCOPE) 

# Set a list with all project files
file (GLOB_RECURSE FILE_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
set (CHAP_3_PROJ_6_LESSON_SOURCE_FILES ${FILE_LIST} PARENT_SCOPE)

# Set a variable with include files path
set (CHAP_3_PROJ_6_LESSON_INCLUDE_DIRECTORY_PATH ${CMAKE_CURRENT_SOURCE_DIR}/inc PARENT_SCOPE)