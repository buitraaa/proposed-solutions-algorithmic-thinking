#include "vote.h"
#include <iostream>

// Definición de variables globales
int voto = 0, votomarv = 0, votokevcaro = 0, votobap = 0, votoBlanco = 0;

void votacion() {
    std::cout << "Bienvenido a su mesa de votación\n";
    std::cout << "Ingrese un número dependiendo del candidato de su elección\n";
    std::cout << "1. Mariana Varón\n";
    std::cout << "2. Kevin Caro\n";
    std::cout << "3. Santiago Batista\n";
    std::cout << "4. Voto en blanco\n";
}

int votar() {
    std::cout << "Ingrese su voto: ";
    std::cin >> voto;

    switch(voto) {
        case 1: votomarv++; break;
        case 2: votokevcaro++; break;
        case 3: votobap++; break;
        case 4: votoBlanco++; break;
        default:
            std::cout << "Opción no válida\n";
    }

    return 0;
}
