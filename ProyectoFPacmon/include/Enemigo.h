#ifndef ENEMIGO_H
#define ENEMIGO_H
#include "Personaje.h"
///const char UP = 72;
///const char LEFT = 75;
///const char RIGHT = 77;
///const char DOWN = 80;

class Enemigo : public Personaje
{
    public:
        Enemigo();
        Enemigo(char *nombre1, char cuerpo1,int vida1);
        ~Enemigo();
        void drawMyPersonaje();
        void setPosicion();
        void Saludar();
        char getVida();
        Posicion getPosicion();
    private:
        char *nombre;
        char cuerpo;
        int vida;
        Posicion pos;

};

#endif // ENEMIGO_H
