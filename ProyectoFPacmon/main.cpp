#include <iostream>
#include "Personaje.h"
#include "Enemigo.h"
#include "Pocman.h"

using namespace std;

int main()
{
    Posicion p(2,4);
    Posicion p2(5,8);
    Direction dir1(2,4);
    ///Enemigo mecondorf("MeconDuorf III",'x',2);
    ///mecondorf.Saludar();
    Pocman xander("Xander",'x',3,p2,dir1);
    xander.Saludar();

    return 0;
}
