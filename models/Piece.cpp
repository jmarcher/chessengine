//
// Created by gordo on 16.05.22.
//

#include "Piece.h"

bool Chess::Piece::isColor(int piece, int color) {
    return getColor(piece) == color;
}

int Chess::Piece::getColor(int piece) {
    return piece & colorMask;
}

int Chess::Piece::getPieceType(int piece) {
    return piece & typeMask;
}

bool Chess::Piece::isRookOrQueen(int piece) {
    return (piece & 0b110) == 0b110;
}

bool Chess::Piece::isBishopOrQueen(int piece) {
    return (piece & 0b101) == 0b101;
}

bool Chess::Piece::isSlidingPiece(int piece) {
    return (piece & 0b100) != 0;
}
