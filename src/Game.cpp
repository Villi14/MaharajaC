#include "Game.h"

namespace m {

Game::Game(): mState(State::start), mScore(0)
{
}

Game::~Game()
{
}

void Game::play()
{
    mState = State::play;
    mScore = 100;
}

int Game::shudown() 
{
    mState = State::end;
    return mScore;
}

} // !m