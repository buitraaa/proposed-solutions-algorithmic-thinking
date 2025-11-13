#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void jugarps() {
    int eleccion;
    cout << "1. Piedra\n2. Papel\n3. Tijera\nElige una opcion: ";
    cin >> eleccion;

    srand(time(0));
    int comp = 1 + rand() % 3;

    cout << "Computadora eligio: ";
    switch (comp) {
        case 1: cout << "Piedra"; break;
        case 2: cout << "Papel"; break;
        case 3: cout << "Tijera"; break;
    }
    cout << endl;

    if (eleccion == comp) {
        cout << "Empate";
    } else if ((eleccion == 1 && comp == 3) || (eleccion == 2 && comp == 1) || (eleccion == 3 && comp == 2)) {
        cout << "Ganaste";
    } else {
        cout << "Perdiste";
    }
    cout << endl;
}
