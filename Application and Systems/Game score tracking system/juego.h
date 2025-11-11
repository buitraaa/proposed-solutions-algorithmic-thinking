#ifndef JUEGO_H
#define JUEGO_H

const int max_jugadores = 10;
const int max_juegos = 5;

void mostrarMenu();
void agregarJugador(char jugadores[][30], int* totalJugadores);
void agregarPuntaje(int puntajes[][max_juegos], int totalJugadores, int totalJuegos);
void mostrarPuntajes(char jugadores[][30], int puntajes[][max_juegos], int totalJugadores, int totalJuegos);

#endif
