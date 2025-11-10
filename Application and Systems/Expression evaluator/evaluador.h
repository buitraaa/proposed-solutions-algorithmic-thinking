#ifndef EVALUADOR_H
#define EVALUADOR_H
#include <string>

const int tamanoMaximo = 100;

void separarElementos(std::string textoExpresion, int arregloNumeros[], char arregloOperadores[], int &cantidadNumeros, int &cantidadOperadores);
int obtenerPrioridad(char caracterOperador);
int aplicarOperacion(int numeroA, int numeroB, char caracterOperador);
int evaluarExpresion(int arregloNumeros[], char arregloOperadores[], int cantidadNumeros, int cantidadOperadores);

#endif