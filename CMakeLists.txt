cmake_minimum_required(VERSION 3.22)
project(chessengine)

set(CMAKE_CXX_STANDARD 23)


add_executable(chessengine main.cpp models/Piece.h models/Piece.cpp)

add_subdirectory(tests)
