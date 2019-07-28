cmake_minimum_required(VERSION 3.14)

set(NAME push_swap)

project(${NAME} C)

set(CMAKE_C_STANDARD 11)

add_executable(${NAME} main.c)

# libft
include_directories(libft/includes)
add_library(libft.a SHARED IMPORTED)
set_target_properties(libft.a PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/libft/libft.a)
target_link_libraries(${NAME} libft.a)