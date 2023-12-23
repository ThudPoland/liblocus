cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)

project(liblocus)

include(FetchContent)
FetchContent_Declare(googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(tests)

add_library(locus src/random/seededrandomgenerator.cpp
                  src/generation/namegenerator.cpp
                  src/utils/commonnamedictionaryprovider.cpp)

target_include_directories(locus PRIVATE include/)

add_executable(locus-visualiser visualiser/src/main.cpp)

find_package(SFML COMPONENTS graphics window system)

target_link_libraries(locus-visualiser locus sfml-graphics sfml-window)

target_include_directories(locus-visualiser PRIVATE include/)
