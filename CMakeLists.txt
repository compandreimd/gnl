cmake_minimum_required(VERSION 3.6)

project(get_next_line)

add_subdirectory(libft)

include_directories(libft/includes)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror -Wall -Wextra")

set(SOURCE_FILES get_next_line.c get_next_line.h main.c)

add_executable(get_next_line ${SOURCE_FILES})

target_link_libraries(get_next_line libft)