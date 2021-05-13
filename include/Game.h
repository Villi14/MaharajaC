#ifndef GAME_H
#define GAME_H

#include "State.h"

namespace m {

class Game
{
public:
    Game();
    ~Game();
    void play();
    int shudown();
private:
    State mState;
    int mScore;  
};

} // !m

#endif // !GAME_H

