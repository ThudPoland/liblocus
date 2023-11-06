cmake_minimum_required(VERSION 3.10)

project(liblocus)

add_library(locus src/placeholder.cpp)
add_executable(locus-visualiser visualiser/src/main.cpp)