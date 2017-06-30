#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "Posicion.h"
#include "Ventana.h"


class Personaje : public Ventana
{
    public:
        Personaje();
        Personaje(char *nombre1, char cuerpo1,int vida1);
        Personaje(char *nombre1, char cuerpo1,int vida1,Posicion pos1);
        ~Personaje();
        Posicion getPosicion(); ///retorna la posicion
        virtual void Saludar()=0; ///salu3
        virtual void drawMyPersonaje()=0; ///dibujar my personaje
        void setForm(char newForm);
        void moveMyPersonaje(Posicion newPosicion); ///cambiar de posicion
        void moveMyPersonajeAndDraw(Posicion newPosicion); ///cambiar de posicion y dibujar :v
        unsigned int getVida();

    protected:
        char *nombre;
        char cuerpo;
        unsigned int vida;
        Posicion myPos;
    private:
};

#endif // PERSONAJE_H
