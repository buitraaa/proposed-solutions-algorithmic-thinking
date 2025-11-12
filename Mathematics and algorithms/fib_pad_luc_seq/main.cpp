#include <iostream>
#include "sequences.h"

int main() {
    int opcion = -1;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Fibonacci\n";
        std::cout << "2. Lucas\n";
        std::cout << "3. Padovan\n";
        std::cout << "4. Todas (matriz n x 3)\n";
        std::cout << "0. Salir\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                int n;
                std::cout << "Cantidad de terminos: ";
                std::cin >> n;
                if (n <= 0) {
                    std::cout << "n debe ser positivo\n";
                    break;
                }
                long long* a = new long long[n];
                generar_fibonacci(n, a);
                imprimir_arreglo(a, n);
                delete[] a;
                break;
            }
            case 2: {
                int n;
                std::cout << "Cantidad de terminos: ";
                std::cin >> n;
                if (n <= 0) {
                    std::cout << "n debe ser positivo\n";
                    break;
                }
                long long* a = new long long[n];
                generar_lucas(n, a);
                imprimir_arreglo(a, n);
                delete[] a;
                break;
            }
            case 3: {
                int n;
                std::cout << "Cantidad de terminos: ";
                std::cin >> n;
                if (n <= 0) {
                    std::cout << "n debe ser positivo\n";
                    break;
                }
                long long* a = new long long[n];
                generar_padovan(n, a);
                imprimir_arreglo(a, n);
                delete[] a;
                break;
            }
            case 4: {
                int n;
                std::cout << "Cantidad de terminos: ";
                std::cin >> n;
                if (n <= 0) {
                    std::cout << "n debe ser positivo\n";
                    break;
                }
                long long** m = new long long*[n];
                for (int i = 0; i < n; i = i + 1) {
                    m[i] = new long long[3];
                }
                generar_todas(n, m);
                imprimir_matriz(m, n, 3);
                for (int i = 0; i < n; i = i + 1) {
                    delete[] m[i];
                }
                delete[] m;
                break;
            }
            case 0: {
                std::cout << "Fin\n";
                break;
            }
            default: {
                std::cout << "Opcion invalida\n";
                break;
            }
        }
    } while (opcion != 0);

    return 0;
}