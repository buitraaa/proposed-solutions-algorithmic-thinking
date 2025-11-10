#include <iostream>
#include <string>
#include "evaluador.h"

int main() {
    std::string textoExpresion;
    int arregloNumeros[tamanoMaximo];
    char arregloOperadores[tamanoMaximo];
    int cantidadNumeros = 0;
    int cantidadOperadores = 0;

    std::cout << "Ingrese una expresión sin paréntesis (ej: 3+4*2): ";
    std::getline(std::cin, textoExpresion);

    separarElementos(textoExpresion, arregloNumeros, arregloOperadores, cantidadNumeros, cantidadOperadores);
    int resultadoFinal = evaluarExpresion(arregloNumeros, arregloOperadores, cantidadNumeros, cantidadOperadores);

    std::cout << "Resultado: " << resultadoFinal << std::endl;
    std::cout <<"Presione Enter para salir...";
    std::cin.get();

    return 0;
}
