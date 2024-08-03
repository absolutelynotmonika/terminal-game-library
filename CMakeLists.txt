cmake_minimum_required(VERSION 3.10)
project(terminal-game-library)

# swt up the compiler
set(CMAKE_CXX_COMPILER "clang++")
add_compile_options(-Wall)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

# for the lsp
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# add source files
file(GLOB SOURCES "src/*/*.cpp" "src/main.cpp")
add_executable(main ${SOURCES})

include_directories(headers)

# link libraries (have to be system installed for now)
find_package(Curses REQUIRED)
target_link_libraries(main PRIVATE ${CURSES_LIBRARIES})
