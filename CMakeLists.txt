cmake_minimum_required(VERSION 3.22)
project(chessengine_lib)

set(CMAKE_CXX_STANDARD 23)

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download)
if (result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif ()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download)
if (result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif ()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
        ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include")
endif ()


add_library(chessengine_lib library.cpp models/Piece.cpp models/Board.cpp models/Board.h lib/StringHelpers.cpp lib/StringHelpers.h)


set(TEST_SOURCES "tests/main.cpp" tests/PieceTest.cpp tests/BoardTest.cpp)
source_group("tests" FILES ${TEST_SOURCES})
add_executable(ChessLibTest ${TEST_SOURCES})
add_dependencies(ChessLibTest chessengine_lib)

target_link_libraries(ChessLibTest gtest_main)
target_link_libraries(ChessLibTest chessengine_lib)
