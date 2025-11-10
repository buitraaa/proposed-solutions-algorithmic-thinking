#ifndef TIQUETES_H
#define TIQUETES_H
#include <string>

int tiquetesDisponibles();
int reservarTiquete(int fila, int columna);
void bucleReservas();
void guardarReservasCSV(const std::string& filename);

#endif