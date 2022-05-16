//
// Created by gordo on 16.05.22.
//
// Highly inspired on: https://github.com/SebLague/Chess-AI

#ifndef CHESSENGINE_PIECE_H
#define CHESSENGINE_PIECE_H

namespace Chess {
    class Piece {
    public:
        static const int NONE = 0;
        static const int KING = 1;
        static const int PAWN = 2;
        static const int KNIGHT = 3;
        static const int BISHOP = 5;
        static const int ROOK = 6;
        static const int QUEEN = 7;

        static const int WHITE = 8;
        static const int BLACK = 16;

        static const int typeMask = 0b00111;
        static const int whiteMask = 0b01000;
        static const int blackMask = 0b10000;
        static const int colorMask = whiteMask | blackMask;

        static bool isColor(int piece, int color);

        static int getColor(int piece);

        static int getPieceType(int piece);

        static bool isRookOrQueen(int piece);

        static bool isBishopOrQueen(int piece);

        static bool isSlidingPiece(int piece);
    };
}


#endif //CHESSENGINE_PIECE_H
