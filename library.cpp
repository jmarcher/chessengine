#include "library.h"

#include <iostream>

#include "models/Piece.h"
#include "models/Board.h"

void init() {
    std::cout << (Chess::Piece::isRookOrQueen(Chess::Piece::BLACK | Chess::Piece::QUEEN) ? "Is a Queen" : "Not a Queen") << std::endl;
}

std::shared_ptr<int> init(int seed) {
    // Todo: init engine

    Chess::Board board(Chess::Board::STARTING_STANDARD);

    return {};
}
