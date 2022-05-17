//
// Created by gordo on 17.05.22.
//

#ifndef CHESSENGINE_LIB_BOARD_H
#define CHESSENGINE_LIB_BOARD_H
// Vendors
#include <vector>
#include <string>

// Model
#include "Piece.h"

namespace Chess{
    class Board {
    public:
        static const std::string STARTING_STANDARD;
        Board(const std::string& fen);

        void replaceBoardWith(const std::string& fenPieces);

        u_int16_t getPosition(int position);
    protected:
        std::vector<u_int16_t> board;
    };
}


#endif //CHESSENGINE_LIB_BOARD_H
