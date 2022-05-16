#include <iostream>
#include "./models/Piece.h"
int main() {
    int piece = Chess::Piece::BLACK | Chess::Piece::QUEEN;
    std::cout << (Chess::Piece::isBishopOrQueen(piece) ? "Is Queen" : "Not Queen") << std::endl;
    std::cout << (Chess::Piece::isColor(piece, Chess::Piece::WHITE) ? "Is White" : "Is Black") << std::endl;
    return 0;
}
