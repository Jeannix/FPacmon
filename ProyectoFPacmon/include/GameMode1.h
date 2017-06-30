#ifndef GAMEMODE1_H
#define GAMEMODE1_H
#include "Menu.h"
#include "Pocman.h"
const char UP = 72;
const char LEFT = 75;
const char RIGHT = 77;
const char DOWN = 80;
const char ESC = 27;
const char SPACE = 32;

class GameMode1
{
    public:
        GameMode1();
        ~GameMode1();
        void startGameMode1();
    protected:
        Menu *myMainMenu;
        Pocman *MyHeroPocman;
        //T score;
};

#endif // GAMEMODE1_H
