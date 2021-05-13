#include <iostream>
#include <vector>
#include <string>
#include <Game.h>

int main(const int argc, const char *argv[])
{
    m::Game game;
    game.play();
    int score = game.shutdown();
    std::cout << score << std::endl;

    return EXIT_SUCCESS;
}

