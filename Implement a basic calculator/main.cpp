#include <iostream>
#include "operaciones.h"

int main() {
    float resultado = 0;
    char operador;
    bool primera_operacion = true;
    bool continuar = true;

    std::cout << "Bienvenido a la calculadora\n";
    
    while (continuar) {
        if (primera_operacion) {
            std::cout << "Ingrese el primer número: ";
            std::cin >> resultado;
            primera_operacion = false;
        }

        std::cout << "\nIngrese el operador (+, -, *, /) o 'q' para salir: ";
        std::cin >> operador;

        if (operador == 'q') {
            break;
        }

        float numero;
        std::cout << "Ingrese el siguiente número: ";
        std::cin >> numero;

        switch (operador) {
            case '+':
                resultado = sumar(resultado, numero);
                break;
            case '-':
                resultado = restar(resultado, numero);
                break;
            case '*':
                resultado = multiplicar(resultado, numero);
                break;
            case '/':
                if (numero != 0) {
                    resultado = dividir(resultado, numero);
                } else {
                    std::cout << "Error: No se puede dividir entre cero.\n";
                    continue;
                }
                break;
            default:
                std::cout << "Operador no válido.\n";
                continue;
        }

        std::cout << "Resultado actual: " << resultado << std::endl;
    }

    std::cout << "Resultado final: " << resultado << std::endl;
    return 0;
}