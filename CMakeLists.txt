cmake_minimum_required(VERSION 3.10)
project(terminal-game-library)

set(CMAKE_CXX_COMPILER "clang++")
add_compile_options(-Wall)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(
   CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build
)

file(GLOB SOURCES "src/*/*.cpp" "src/main.cpp" "src/utils.cpp")
add_executable(main ${SOURCES})

include_directories(headers)
