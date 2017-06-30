#include "Pocman.h"

Pocman::Pocman()
{
    this -> nombre = NULL;
    this -> cuerpo = NULL;
    this -> vida = NULL;
}
Pocman::Pocman(char *nombre1, char cuerpo1,int vida1,Posicion pos1, Direction dir1)
{
    nombre = new char[20];
    this -> nombre = nombre1;
    this -> cuerpo = cuerpo1;
    this -> vida = vida1;
    this -> pos = pos1;
    this -> dir = dir1;
}

Pocman::~Pocman()
{
    delete[] nombre;

}
void Pocman::Saludar()
{
    cout <<"Hola soy Pocman"<<endl;
    cout <<"Soy el Gran, todopoderoso venudote "<<nombre<<endl;
    cout <<"Tengo "<<vida<<" vida(s) alv ;v"<<endl;
}
void Pocman::drawMyPersonaje()
{
    deletePixel(pos);
    ///int dirEnemigo = rand()%4;
    ///switch(dirEnemigo)
    Posicion newPosi (pos.x + dir.dirX, pos.y + dir.dirY);
    moveMyPersonaje(newPosi);
    Personaje::drawMyPersonaje();
}
void Pocman::setDireccion(Direction dir2)
{
    dir = dir2;
}
Direction Pocman::getDireccion(){return dir;}
unsigned int Pocman::getVida(){return vida;}
Posicion Pocman::getPosicion(){return pos;}

