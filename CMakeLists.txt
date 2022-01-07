cmake_minimum_required(VERSION 3.5)

project(codeforces LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_FILES Source\ Files/*.cpp)

add_executable(codeforces ${SRC_FILES})

target_include_directories(codeforces PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Header\ Files)
