#ifndef POSICION_H
#define POSICION_H
#include <string>
#include <iostream>


using namespace std;
class Posicion
{
    public:
        int x,y;
        Posicion();
        Posicion(int x1);
        Posicion(int x2,int y2);
        int getX();
        int getY();


};

#endif // POSICION_H
