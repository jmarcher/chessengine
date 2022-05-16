cmake_minimum_required(VERSION 3.22)
project(chessengine)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(tests)

add_executable(chessengine main.cpp models/Piece.cpp models/Piece.h)

