//
// Created by gordo on 16.05.22.
//

#include "gtest/gtest.h"
#include "../models/Piece.h"
class PieceTests : public testing::Test{
public:

    virtual void SetUp()
    {
    }

    virtual void TearDown()
    {
    }
};

TEST_F(PieceTests, TestPieceColor)
{
    const int whiteQueen = Chess::Piece::WHITE | Chess::Piece::QUEEN;

    ASSERT_TRUE(Chess::Piece::isBishopOrQueen(whiteQueen));
    ASSERT_TRUE(Chess::Piece::isRookOrQueen(whiteQueen));

    ASSERT_TRUE(Chess::Piece::isColor(whiteQueen, Chess::Piece::WHITE));

    int expectedType = Chess::Piece::QUEEN;
    ASSERT_EQ(expectedType, Chess::Piece::getPieceType(whiteQueen));

    int expectedColor = Chess::Piece::WHITE;
    ASSERT_EQ(expectedColor, Chess::Piece::getColor(whiteQueen));
}

TEST_F(PieceTests, TestPawnColor)
{
    const int whitePawn = Chess::Piece::WHITE | Chess::Piece::PAWN;

    ASSERT_FALSE(Chess::Piece::isBishopOrQueen(whitePawn));
    ASSERT_TRUE(Chess::Piece::isColor(whitePawn, Chess::Piece::WHITE));
    ASSERT_FALSE(Chess::Piece::isSlidingPiece(whitePawn));
}

TEST_F(PieceTests, TestBishopColor)
{
    const int whiteBishop = Chess::Piece::WHITE | Chess::Piece::BISHOP;

    ASSERT_TRUE(Chess::Piece::isBishopOrQueen(whiteBishop));
    ASSERT_TRUE(Chess::Piece::isColor(whiteBishop, Chess::Piece::WHITE));
    ASSERT_TRUE(Chess::Piece::isSlidingPiece(whiteBishop));
}