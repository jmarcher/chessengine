# 'Google_test' is the subproject name
project(tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Tests_run PieceTests.cpp)
target_link_libraries(Tests_run gtest gtest_main)