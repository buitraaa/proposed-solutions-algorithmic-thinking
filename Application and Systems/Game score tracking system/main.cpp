#include <iostream>
#include "juego.h"

int main() {
    char jugadores[max_jugadores][30];
    int puntajes[max_jugadores][max_juegos];
    int totalJugadores = 0;
    int totalJuegos = max_juegos;

    int opcion;
    do {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                agregarJugador(jugadores, &totalJugadores);
                break;
            case 2:
                agregarPuntaje(puntajes, totalJugadores, totalJuegos);
                break;
            case 3:
                mostrarPuntajes(jugadores, puntajes, totalJugadores, totalJuegos);
                break;
            case 4:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opcion invalida.\n";
        }
    } while (opcion != 4);

    return 0;
}