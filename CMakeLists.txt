cmake_minimum_required(VERSION 3.14)
project(logApp C)

set(CMAKE_C_STANDARD 99)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

add_executable(logApp main.c)

include(FindPkgConfig)
find_package(BugReports REQUIRED)
include_directories(${BUGREPORTS_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${BUGREPORTS_LIBRARY})