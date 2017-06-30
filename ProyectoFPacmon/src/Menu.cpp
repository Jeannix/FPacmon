#include "Menu.h"
Menu::Menu()
{
    pos = Posicion(0,0); ///inicializa la posicion en 0,0
    mySize = Size(100,50);
}
Menu::Menu(Size size1)
{
    pos = Posicion(0);
    mySize = size1;
}
Menu::Menu(Size size2, Posicion pos1)
{
    pos = pos1;
    mySize = size2;
}
void Menu::showMessage(Posicion pos2, string message1)
{
    setXY(pos2.x, pos2.y);
    cout<<message1;
}
void Menu::drawPrincipalMenu()
{
    system("cls");
    cout << "/t/t POCMAN ADVENTURES ::: |:v| "<< endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Escoja 1 para el modo pacman normal" <<endl;
    cout << "Escoja 2 para el modo historia de pacman" <<endl;
}
void Menu::drawGame1Menu()
{
    system("cls");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    char c = 'h';
    Posicion pto1(4,6), pto2(64,31);
    int widthInicial=0,heightInicial=0,widthGame = 60, heightGame = 25;
    while(widthInicial<widthGame){
        drawPixel(pto1.x++,pto1.y,c);
        drawPixel(pto2.x--,pto2.y,c);
        widthInicial++;
    }
    while(heightInicial<heightGame){
        drawPixel(pto1.x,pto1.y++,c);
        drawPixel(pto2.x,pto2.y--,c);
        widthInicial++;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
void Menu::drawGame2Menu()
{
    system("cls");
    cout <<"DLC History Mode In Progress!!!"<<endl;

}
void Menu::drawExitMenu()
{
    system("cls");
    cout << "Ingrese <si> para terminar el programa y <no> para volver al menu principal " << endl;
    cout << "Deseea salir?" << endl;
    string y;
    cin >> y;
    while (y!="si" && y!="si"){
        system("cls");
        cout << "Opcion no valida" << endl;
        cout << "Ingrese s para terminar el programa y n para volver al menu principal: " << endl;
        cin >> y;
    }
    if (y=="si"){
        system("cls");
        cout <<"Programa terminando..."<<endl;
        exit(0); ///Termina todo el programa
    }

}
Posicion Menu::getPosicion(){return pos;}
Size Menu::getSize(){return mySize;}


