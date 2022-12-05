// battle royal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>
#include <cstdlib>
using namespace std;

int main()
{ 
  
    
    
    
    //salud jugadores
    int eleccion1 = 0;
    string nombre;
    int jugador  = 99900;
    int jugador2 = 0;
    int jugador3 = 0;
    int jugador4 = 0;
    int jugador5 = 0;
    int jugador6 = 0;
    int jugador7 = 0;
    int jugador8 = 0;
    int jugador9 = 0;
    int jugador10 = 0;
    int jugador11 = 0;
    int jugador12 = 0;
    int jugador13 = 0;
    int jugador14 = 0;
    int jugador15 = 0;
    int jugador16 = 0;
    int jugador17 = 0;
    int jugador18 = 0;
    int jugador19 = 0;
    int jugador20 = 0;
    int jugador21 = 0;
    int jugador22 = 0;
   
    srand(time(NULL));
    jugador2 = 800 + rand() % 1000;
    jugador3 = 800 + rand() % 1000;
    jugador4 = 800 + rand() % 1000;
    jugador5 = 800 + rand() % 1000;
    jugador6 = 800 + rand() % 1000;
    jugador7 = 800 + rand() % 1000;
    jugador8 = 800 + rand() % 1000;
    jugador9 = 800 + rand() % 1000;
    jugador10 = 800 + rand() % 1000;
    jugador11 = 800 + rand() % 1000;
    jugador12 = 800 + rand() % 1000;
    jugador13 = 800 + rand() % 1000;
    jugador14 = 800 + rand() % 1000;
    jugador15 = 800 + rand() % 1000;
    jugador16 = 800 + rand() % 1000;
    jugador17 = 800 + rand() % 1000;
    jugador18 = 800 + rand() % 1000;
    jugador19 = 800 + rand() % 1000;
    jugador20 = 800 + rand() % 1000;
    jugador21 = 800 + rand() % 1000;
    jugador22 = 800 + rand() % 1000;
    Beep(220, 100);

    Beep(294, 100);

    Beep(294, 100);

    Beep(370, 100);

    Beep(494, 100);

    Beep(370, 100);

    Beep(440, 100);

    /* */

    Beep(440, 100);
    cout << "ingresa tu nombre soldado" << endl;
    cin >> nombre;
    
    Beep(494, 100);

    Beep(440, 100);

    Beep(370, 100);

    Beep(392, 100);

    Beep(370, 100);
    cout << "bienvenido " << nombre << endl;
    Beep(330, 100);

    /* */

    Beep(247, 100);

    Beep(330, 100);

    Beep(330, 200);
  
   
    Beep(370, 200);

    Beep(555, 200);

    Beep(555, 200);

    Beep(494, 300);

    Beep(440, 300);

    Beep(330, 200);
    
   
    
    system("cls");

    cout << "jugador escoja su arma ingresa un numero del 1-3 " << endl;
    cout << "1- espada embrujada. 2- pistola lazer. 3- martillo gravitatorio. cualquier otro numero - manos ";

    cin >> eleccion1;


    switch (eleccion1)
    {
    case 1: jugador + 50000 + 350;
        break;
    case 2: jugador + 500 + 400;
        break;
    case 3: jugador + 500 + 450;

    default:
        jugador + 100;
        break;
    }

  

    //PELEA 1
    
    cout << "jugador estas peleando contra cat " << endl;
    system("cls");
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);



    if (jugador > jugador2)
        cout << "----------ganaste contra cat---------- " << endl;
       
       

    else 
    {
        cout << "----------gano cat---------- " <<  endl;
        cout << jugador << " vs " << jugador2 << endl;
        return(0);
    }

    //pelea 2


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra ed " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador3)
        cout << "----------ganaste contra ed----------  " << endl;

    else
    {
        cout << "----------gano ed---------- " << endl;
        cout << jugador << " vs " << jugador3 << endl;
        return(0);
    }

    //pelea 3


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra joel " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador4)
        cout << "----------ganaste contra joel---------- " << endl;

    else
    {
        cout << "----------gano joel---------- " << endl;
        cout << jugador << " vs " << jugador4 << endl;
        return(0);
    }

    //pelea 4


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra minimi " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador5)
        cout << "----------ganaste contra minimi ----------  " << endl;

    else
    {
        cout << "----------gano minimi---------- " << endl;
        cout << jugador << " vs " << jugador5 << endl;
        return(0);
    }

    //pelea 5


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra betsa " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador6)
        cout << "----------ganaste contra betsa---------- " << endl;

    else
    {
        cout << "----------gano betsa---------- " << endl;
        cout << jugador << " vs " << jugador6 << endl;
        return(0);
    }

    //pelea 6


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra ema " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
   
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador7)
        cout << "----------ganaste contra ema---------- " << endl;

    else
    {
        cout << "----------gano ema---------- " << endl;
        cout << jugador << " vs " << jugador7 << endl;
        return(0);
    }

    //pelea 7


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra paul " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador8)
        cout << "----------ganaste contra paul---------- " << endl;

    else
    {
        cout << "----------gano paul---------- " << endl;
        cout << jugador << " vs " << jugador8 << endl;
        return(0);
    }

    //pelea 8


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra yas " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador9)
        cout << "----------ganaste contra yas---------- " << endl;

    else
    {
        cout << "----------gano yas---------- " << endl;
        cout << jugador << " vs " << jugador9 << endl;
        return(0);
    }
    //pelea 9


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra julio " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador10)
        cout << "----------ganaste contra julio... facil---------- " << endl;

    else
    {
        cout << "----------gano julio qp2---------- " << endl;
        cout << jugador << " vs " << jugador10 << endl;
        return(0);
    }
    //pelea 10


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra juanfer " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador11)
        cout << "----------ganaste contra juanfer---------- " << endl;

    else
    {
        cout << "----------gano juanfer---------- " << endl;
        cout << jugador << " vs " << jugador11 << endl;
        return(0);
    }
    //pelea 11


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra chema " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador12)
        cout << "----------ganaste contra chema---------- " << endl;


    else
    {
        cout << "----------gano chema---------- " << endl;
        cout << jugador << " vs " << jugador12 << endl;
        return(0);
    }
    //pelea 12


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra ricardo " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador13)
        cout << "----------ganaste contra ricardo---------- " << endl;

    else
    {
        cout << "----------gano ricardo---------- " << endl;
        cout << jugador << " vs " << jugador13 << endl;
        return(0);
    }
    //pelea 13


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra bacardi " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador14)
        cout << "----------ganaste contra el bacardi---------- " << endl;

    else
    {
        cout << "----------gano el bacardi *c vomita ---------- " << endl;
        cout << jugador << " vs " << jugador14 << endl;
        return(0);
    }
    //pelea 14


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra la maestra de psicologia " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador15)
        cout << "----------ganaste contra la mestra de psicologia---------- " << endl;

    else
    {
        cout << "----------gano la miss---------- " << endl;
        cout << jugador << " vs " << jugador15 << endl;
        return(0);
    }
    //pelea 15


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra un veracruzano " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador16)
        cout << "----------ganaste contra el veracruzano---------- " << endl;

    else
    {
        cout << "----------gano la jaiba---------- " << endl;
        cout << jugador << " vs " << jugador16 << endl;
        return(0);
    }
    //pelea 16


    Sleep(1000);
    Sleep(1000);
    cout << "jugador estas peleando contra un pipope " << endl;
    system("cls");
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador17)
        cout << "----------ganaste contra pipope---------- " << endl;

    else
    {
        cout << "----------gano el pipope---------- " << endl;
        cout << jugador << " vs " << jugador17 << endl;
        return(0);
    }
    //pelea 17


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra un defeño " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador18)
        cout << "----------ganaste contra el defeño---------- " << endl;

    else
    {
        cout << "----------gano el defeño---------- " << endl;
        cout << jugador << " vs " << jugador18 << endl;
        return(0);
    }
    //pelea 18


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra dios " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador19)
        cout << "----------ganaste contra dios---------- " << endl;

    else
    {
        cout << "----------gano dios---------- " << endl;
        cout << jugador << " vs " << jugador19 << endl;
        return(0);
    }
    //pelea 19


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra mario " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(494, 100);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(440, 100);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador20)
        cout << "----------ganaste contra mario---------- " << endl;

    else
    {
        cout << "----------gano mario---------- " << endl;
        cout << jugador << " vs " << jugador20 << endl;
        return(0);
    }
  
    //pelea 21


   

    Beep(330, 300);

    Beep(294, 1800);


    Sleep(1000);
    system("cls");
    cout << "jugador estas peleando contra nuestro señor jesu cristo " << endl;
    Sleep(1000);
    cout << "." << endl;
    Beep(440, 300);
    Sleep(500);
    system("cls");
    cout << ".." << endl;
    Beep(494, 300);
    Sleep(500);
    system("cls");
    cout << "..." << endl;
    Beep(370, 1100);
    Sleep(500);
    system("cls");
    cout << "         .---.       " << endl;
    cout << "    ___ /_____|      " << endl;
    cout << "   /\.-`( '.' )      " << endl;
    cout << "  / /    \_-_/_      " << endl;
    cout << "  \ `-.-`:'V'/ / -.  " << endl;
    cout << "   `.__,   |// , \   " << endl;
    cout << "       |Ll //Ll|\ \  " << endl;
    cout << "       |__//   | \_\ " << endl;
    cout << "      /---|[]==| / / " << endl;
    cout << "      \__/ |   \/\/  " << endl;
    cout << "      /_   | Ll_\|   " << endl;
    cout << "       |`^... ^ `|   " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       |   |   |     " << endl;
    cout << "       L___l___J     " << endl;
    cout << "        |_ | _|      " << endl;
    cout << "       (___|___)     " << endl;
    cout << "        ^^^ ^^^      " << endl;
    Sleep(1000);

    if (jugador > jugador21)
        cout << "----------ganaste contra nuestro señor jesucristo---------- " << endl;

    else
    {
        cout << "----------gano  nuestro señor jesucristo---------- " << endl;
        cout << jugador << " vs " << jugador21 << endl;
        return(0);
    }
}

