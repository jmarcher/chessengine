//
// Created by gordo on 17.05.22.
//
#include <string>
#include "gtest/gtest.h"
#include "../models/Board.h"
class BoardTests : public testing::Test{
public:
    Chess::Board* b;

    virtual void SetUp()
    {
        std::string startingPoint = Chess::Board::STARTING_STANDARD;
        b = new Chess::Board(startingPoint);
    }

    virtual void TearDown()
    {
    }
};


TEST_F(BoardTests, BoardShouldBeInitializedWithStaringStandard) {

    ASSERT_TRUE(Chess::Piece::isRookOrQueen(b->getPosition(0)));
    auto expectedType = Chess::Piece::KNIGHT;
    ASSERT_EQ(expectedType, Chess::Piece::getPieceType(b->getPosition(1)));
}