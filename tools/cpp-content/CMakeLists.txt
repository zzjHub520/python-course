cmake_minimum_required(VERSION 3.25)
project(cpp_content)

set(CMAKE_CXX_STANDARD 17)

add_executable(python_content python_content.cpp)
#target_compile_definitions(cpp_content PUBLIC INPUT_FILENME="${CMAKE_CURRENT_SOURCE_DIR}input/DarkHorseProgrammer.txt")
set_property(SOURCE python_content.cpp PROPERTY COMPILE_DEFINITIONS INPUT_FILENME="${CMAKE_CURRENT_SOURCE_DIR}/input/DarkHorseProgrammer.txt")
set_property(SOURCE python_content.cpp APPEND_STRING PROPERTY COMPILE_DEFINITIONS OUTPUT_FILENME="${CMAKE_CURRENT_BINARY_DIR}/DarkHorseProgrammer.md")

add_executable(git_content git_content.cpp)
#target_compile_definitions(cpp_content PUBLIC INPUT_FILENME="${CMAKE_CURRENT_SOURCE_DIR}input/DarkHorseProgrammer.txt")
set_property(SOURCE git_content.cpp PROPERTY COMPILE_DEFINITIONS INPUT_FILENME="${CMAKE_CURRENT_SOURCE_DIR}/input/git.txt")
set_property(SOURCE git_content.cpp APPEND_STRING PROPERTY COMPILE_DEFINITIONS OUTPUT_FILENME="${CMAKE_CURRENT_BINARY_DIR}/git.txt")

