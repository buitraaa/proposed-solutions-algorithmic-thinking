#include "evaluador.h"
#include <iostream>

void separarElementos(std::string textoExpresion, int arregloNumeros[], char arregloOperadores[], int &cantidadNumeros, int &cantidadOperadores) {
    std::string textoNumero = "";
    cantidadNumeros = 0;
    cantidadOperadores = 0;

    for (int posicion = 0; posicion < textoExpresion.length(); posicion++) {
        char caracterActual = textoExpresion[posicion];

        if (caracterActual >= '0' && caracterActual <= '9') {
            textoNumero += caracterActual;
        } else if (caracterActual == '+' || caracterActual == '-' || caracterActual == '*' || caracterActual == '/') {
            arregloNumeros[cantidadNumeros] = std::stoi(textoNumero);
            textoNumero = "";
            cantidadNumeros++;
            arregloOperadores[cantidadOperadores] = caracterActual;
            cantidadOperadores++;
        }
    }

    if (textoNumero != "") {
        arregloNumeros[cantidadNumeros] = std::stoi(textoNumero);
        cantidadNumeros++;
    }
}

int obtenerPrioridad(char caracterOperador) {
    if (caracterOperador == '*' || caracterOperador == '/') return 2;
    if (caracterOperador == '+' || caracterOperador == '-') return 1;
    return 0;
}

int aplicarOperacion(int numeroA, int numeroB, char caracterOperador) {
    if (caracterOperador == '+') return numeroA + numeroB;
    if (caracterOperador == '-') return numeroA - numeroB;
    if (caracterOperador == '*') return numeroA * numeroB;
    if (caracterOperador == '/') {
        if (numeroB != 0) return numeroA / numeroB;
        std::cout << "Error: división por cero.\n";
        return 0;
    }
    return 0;
}

int evaluarExpresion(int arregloNumeros[], char arregloOperadores[], int cantidadNumeros, int cantidadOperadores) {
    for (int i = 0; i < cantidadOperadores; i++) {
        if (obtenerPrioridad(arregloOperadores[i]) == 2) {
            arregloNumeros[i] = aplicarOperacion(arregloNumeros[i], arregloNumeros[i + 1], arregloOperadores[i]);

            for (int j = i + 1; j < cantidadNumeros - 1; j++) {
                arregloNumeros[j] = arregloNumeros[j + 1];
            }
            for (int j = i; j < cantidadOperadores - 1; j++) {
                arregloOperadores[j] = arregloOperadores[j + 1];
            }

            cantidadNumeros--;
            cantidadOperadores--;
            i--; 
        }
    }

    int resultado = arregloNumeros[0];
    for (int i = 0; i < cantidadOperadores; i++) {
        resultado = aplicarOperacion(resultado, arregloNumeros[i + 1], arregloOperadores[i]);
    }

    return resultado;
}