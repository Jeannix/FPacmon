#include <iostream>
#include "Personaje.h"
#include "Enemigo.h"
#include "Pocman.h"
#include "GameMode1.h"
using namespace std;

int main()
{
    ///Posicion p(2,4);
    ///Posicion p2(5,8);
    ///Direction dir1(2,4);
    ///Enemigo mecondorf("MeconDuorf III",'x',2);
    ///mecondorf.Saludar();
    ///Pocman xander("Xander",'x',3,p2,dir1);
    ///xander.Saludar();
    GameMode1 MyGame;
    MyGame.startGameMode1();


    return 0;
}
