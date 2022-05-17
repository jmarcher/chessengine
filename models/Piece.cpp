//
// Created by gordo on 16.05.22.
//

#include "Piece.h"

int Chess::Piece::getColor(int piece) {
    return piece & Chess::Piece::colorMask;
}

bool Chess::Piece::isColor(int piece, int color) {
    return getColor(piece) == color;
}

bool Chess::Piece::isRookOrQueen(int piece) {
    return (piece & ROOK_OR_QUEEN_MASK) == ROOK_OR_QUEEN_MASK;
}

bool Chess::Piece::isSlidingPiece(int piece) {
    return (piece & SLIDING_PIECE_MASK) != 0;
}

bool Chess::Piece::isBishopOrQueen(int piece) {
    return (piece & BISHOP_OR_QUEEN_MASK) == BISHOP_OR_QUEEN_MASK;
}

int Chess::Piece::getPieceType(int piece) {
    return piece & typeMask;
}
