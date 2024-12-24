cmake_minimum_required(VERSION 3.30)
project(Sample)

set(CMAKE_CXX_STANDARD 26)

set(PRJ_INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(PRJ_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

#[[third_party]]
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/third_party/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)
add_subdirectory(${PROJECT_SOURCE_DIR}/third_party)
list(APPEND PRJ_EXE_LIST ${third_party_files})

#[[include]]
add_subdirectory(${PRJ_INC_DIR})
list(APPEND PRJ_EXE_LIST ${inc_files})
include_directories(${PRJ_INC_DIR})

#[[src]]
add_subdirectory(${PRJ_SRC_DIR})
include_directories(${PRJ_SRC_DIR})
list(APPEND PRJ_EXE_LIST ${src_files})

add_executable(Sample ${PRJ_EXE_LIST})
