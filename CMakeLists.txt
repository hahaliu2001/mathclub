cmake_minimum_required(VERSION 3.6)
project(mathclub)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cc)
add_executable(mathclub_run ${SOURCE_FILES})

include_directories(include)

add_subdirectory(src)
add_subdirectory(tests)

# target_link_libraries(mathclub_run patterns)