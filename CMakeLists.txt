cmake_minimum_required(VERSION 3.15)
project(Huffman C)

set(CMAKE_C_STANDARD 99)

set(SOURCES source/main.c source/Files/compression/naive_compression.c source/Files/decompression/naive_decompression.c source/Files/Dictionary/naive_dictionary.c source/Files/Huffman_tree/Huffman_naive_tree.c source/Files/Huffman_tree/Optimized_huffman_tree.c source/Files/Lettertobit/C_File/conversion.c source/Files/Lettertobit/C_File/file_size.c source/Files/Occurrences/naive_occurrences.c source/Files/Occurrences/Optimized_occurrences.c source/Files/sdd/sdd.c)
set(INCLUDES source/Files/compression/naive_compression.h source/Files/decompression/naive_decompression.h source/Files/Dictionary/naive_dictionary.h source/Files/Huffman_tree/Huffman_naive_tree.h source/Files/Huffman_tree/Optimized_huffman_tree.h source/Files/Lettertobit/Header/conversion.h source/Files/Lettertobit/Header/file_size.h source/Files/Occurrences/naive_occurrences.h source/Files/Occurrences/Optimized_occurrences.h source/Files/sdd/sdd.h)

add_executable(Huffman ${INCLUDES} ${SOURCES})

