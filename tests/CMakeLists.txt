enable_testing()

add_executable(locus-tests seededrandomgenerator.cpp)

target_link_libraries(locus-tests GTest::gtest_main locus)

target_include_directories(locus-tests PRIVATE ${CMAKE_SOURCE_DIR}/include)

include(GoogleTest)
gtest_discover_tests(locus-tests)
