#include "gtest/gtest.h"
#include "Game.h"

using namespace m;

TEST(Score, test1) {
    Game game;
    game.play();
    int score = game.shutdown();
    EXPECT_EQ (score,  100);
}