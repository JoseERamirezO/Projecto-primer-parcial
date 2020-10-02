#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    
    int opc, salir;
    inicio:
    system("cls");
    cout << "+++++++++++++++" << endl << "MENU DE JUEGOS" << endl << "++++++++++++++" <<endl << endl << "1. Nave espacial  "<< endl << "2. culebrita" << endl << "3. SALIR" << endl << "Selecione el juego: ";
    cin >> opc;
    cout << endl;
    switch (opc)
    {
    case 1:
        system ("cls");
        {
        starShip();
        }
        goto inicio;
    
    case 2: 
        system ("cls");
        {
            snake();
        }
        goto inicio;

    case 3: 
        goto salir;
        break;
    
    default:

    cout << "OPCION NO VALIDA" << endl;
   
        break;
    } 
    salir:
    return 0;
    }