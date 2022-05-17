//
// Created by gordo on 17.05.22.
//
#include <cctype>
#include <iostream>

#include "Board.h"

#include "../lib/StringHelpers.h"

const std::string Chess::Board::STARTING_STANDARD = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
const char PAWN = 'P';
const char KNIGHT = 'N';
const char BISHOP = 'B';
const char ROOK = 'R';
const char QUEEN = 'Q';
const char KING = 'K';

Chess::Board::Board(const std::string& fen) {
    auto partition = StringHelpers::explode(fen, ' ');
    replaceBoardWith(partition[0]);

}

u_int16_t Chess::Board::getPosition(int position) {
    return board.at(position);
}

void Chess::Board::replaceBoardWith(const std::string& fenPieces) {
    for(const char& piece: fenPieces){
        if(piece == '/') continue;

        if(std::isdigit(piece)){
            uint16_t position = piece - '0';
            for(uint16_t i = 0; i < position; i++){
                board.push_back(Chess::Piece::NONE);
            }
            continue;
        }

        int color, type;

        if(std::isupper(piece)){
            color = Chess::Piece::WHITE;
        }else{
            color = Chess::Piece::BLACK;
        }
        switch (std::toupper(piece)){
            case PAWN: type = Chess::Piece::PAWN; break;
            case KNIGHT: type = Chess::Piece::KNIGHT; break;
            case BISHOP: type = Chess::Piece::BISHOP; break;
            case ROOK: type = Chess::Piece::ROOK; break;
            case QUEEN: type = Chess::Piece::QUEEN; break;
            case KING: type = Chess::Piece::KING; break;
        }
        board.push_back(color | type);
    }
}
