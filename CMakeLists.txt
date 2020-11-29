cmake_minimum_required(VERSION 3.15)
project(Huffman C)

set(CMAKE_C_STANDARD 99)

set(INCLUDES sdd.h headers/1/a.h headers/1/b headers/2/1.h headers/2/2.h headers/2/3.h)
set(SOURCES main.c src/1/b.c src/1/a.c src/2/1.c sdd.c src/2/2.c src/2/3.c)

add_executable(Huffman ${INCLUDES} ${SOURCES})

