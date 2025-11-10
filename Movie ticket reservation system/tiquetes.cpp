#include "tiquetes.h"
#include <iostream>
#include <fstream>
#include <string>   

const int filas = 8;
const int columnas = 15;

int asientos[filas][columnas] = {0};

int tiquetesDisponibles() {
    for(int i=0;i<filas;i++) {
        for(int j=0;j<columnas;j++) {
            if (asientos[i][j] == 0)
                std::cout << "[ ]";
            else
                std::cout << "[X]";
        }
        std::cout << std::endl;
    }
    return 0;
}

int reservarTiquete(int fila, int columna) {
    if (fila < 1 || fila > filas || columna < 1 || columna > columnas) {
        std::cout << "Asiento fuera de rango.\n";
        return -1;
    }
    if (asientos[fila-1][columna-1] == 1) {
        std::cout << "El asiento ya está reservado.\n";
        return -1;
    }
    asientos[fila-1][columna-1] = 1;
    std::cout << "Tiquete reservado en la fila " << fila << " y columna " << columna << std::endl;
    std::cin.get();
    std::cout <<" Tiquetes disponibles actualizados:\n";
    tiquetesDisponibles();
    return 0;
}

void bucleReservas() {
    int opcion = 1;
    while (opcion == 1) {
        int fila, columna;
        std::cout << "¿En donde deseas reservar un tiquete?\n";
        std::cout << "Fila (1-8): ";
        std::cin >> fila;
        std::cout << "Columna (1-15): ";
        std::cin >> columna;
        reservarTiquete(fila, columna);
        std::cout << "¿Desea reservar otro asiento? (1=Si, 0=No): ";
        std::cin >> opcion;
    }
}

void guardarReservasCSV(const std::string& filename) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cout << "No se pudo abrir el archivo para guardar.\n";
        return;
    }
    file << "Fila,Columna\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (asientos[i][j] == 1) {
                file << (i+1) << "," << (j+1) << "\n";
            }
        }
    }
    file.close();
    std::cout << "Reservas guardadas en " << filename << std::endl;
}