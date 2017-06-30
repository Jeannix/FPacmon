#include "Ventana.h"

void Ventana::setXY(int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void Ventana::drawPixel(int x1,int y1, char a)
{
    setXY(x1,y1);
    cout <<a;
}
void Ventana::drawPixel(Posicion xy1,char a)
{
    setXY(xy1.getX(),xy1.getY());
    cout <<a;
}
void Ventana::deletePixel(int x1,int y1)
{
    setXY(x1,y1);
    cout <<" ";
}
void Ventana::deletePixel(Posicion xy1)
{
    setXY(xy1.getX(),xy1.getY());
    cout <<" ";
}
