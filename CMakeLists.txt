cmake_minimum_required(VERSION 2.8)

project(ExampleApp)

add_executable(ExampleApp main.c "declare.h"  "declare.c" "functions.h" "functions.c")