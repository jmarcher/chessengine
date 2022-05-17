#include "library.h"

#include <iostream>

#include "models/Piece.h"

void hello() {
    std::cout << (Chess::Piece::isRookOrQueen(Chess::Piece::BLACK | Chess::Piece::QUEEN) ? "Is a Queen" : "Not a Queen") << std::endl;
}
