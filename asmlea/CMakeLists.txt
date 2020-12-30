cmake_minimum_required(VERSION 3.15)
project(Test)
enable_language(ASM_NASM)

set(CMAKE_C_STANDARD 99)

set(ASM_SOURCES
     test.asm
)

set (SOURCES
     main.c 
     ${ASM_SOURCES}
)

set_source_files_properties(${ASM_SOURCES} PROPERTIES LANGUAGE ASM_NASM)

add_executable(program  ${SOURCES})