#include "GameMode1.h"

GameMode1::GameMode1()
{
    myMainMenu = new Menu(Size(50,20),Posicion(2,2));
    Posicion tWindow = myMainMenu -> getPosicion();
    //Size tSize = myMainMenu -> getSize();
    tWindow.x += 8;
    tWindow.y +=8;
    tWindow = myMainMenu -> getPosicion();
    tWindow.x++;
    tWindow.y++;
    ///srand(time(NULL));

}
GameMode1::~GameMode1()
{
    delete myMainMenu;
}
void GameMode1::startGameMode1()
{
    char c;
    bool endGameMode1=false;
    myMainMenu ->drawGame1Menu();
    do{
        if(kbhit()){ ///verifica si mantienes apretada una tecla
            c = getch();
            Posicion p1(1,1);
            Direction d = MyHeroPocman->getDireccion();
            switch (c)
            {
                case ESC:
                    endGameMode1 = true;
                    system("cls");
                    myMainMenu->showMessage(p1,"Chao prro :V!");
                    system("pause");
                    break;
                case SPACE:
                    ///myMainMenu->ShowMessage(Position(1,1),string("escape key pressed"));
                    break;
                case UP:
                    d.dirY-=1;
                    break;
                case DOWN:
                    d.dirY+=1;
                    break;
                case LEFT:
                    d.dirX-=1;
                    break;
                case RIGHT:
                    d.dirX+=1;
                    break;
            }
            ///MyHeroPocman::setDirection(d);
        }
    }while(!endGameMode1);

}
