#include <iostream>
#include <cstring>
#include "juego.h"

void mostrarMenu() {
    std::cout << "\n1. Agregar jugador\n";
    std::cout << "2. Agregar puntaje\n";
    std::cout << "3. Mostrar puntajes\n";
    std::cout << "4. Salir\n";
    std::cout << "Seleccione una opcion: ";
}

void agregarJugador(char jugadores[][30], int* totalJugadores) {
    if (*totalJugadores >= max_jugadores) {
        std::cout << "Limite de jugadores alcanzado.\n";
        return;
    }
    std::cout << "Nombre del jugador: ";
    std::cin.ignore();
    std::cin.getline(jugadores[*totalJugadores], 30);
    (*totalJugadores)++;
}

void agregarPuntaje(int puntajes[][max_juegos], int totalJugadores, int totalJuegos) {
    int i, j, p;
    for (i = 0; i < totalJugadores; i++) {
        std::cout << "Jugador " << i << ":\n";
        for (j = 0; j < totalJuegos; j++) {
            std::cout << "  Puntaje en juego " << j << ": ";
            std::cin >> p;
            puntajes[i][j] = p;
        }
    }
}

void mostrarPuntajes(char jugadores[][30], int puntajes[][max_juegos], int totalJugadores, int totalJuegos) {
    int i, j;
    std::cout << "\nPUNTAJES:\n";
    for (i = 0; i < totalJugadores; i++) {
        std::cout << jugadores[i] << ": ";
        for (j = 0; j < totalJuegos; j++) {
            std::cout << puntajes[i][j] << " ";
        }
        std::cout << "\n";
    }
}