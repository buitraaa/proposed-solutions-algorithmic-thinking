#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()
#include "aleatorio.h"

int generarNumeroAleatorio(int minimo, int maximo) {
    srand(time(NULL)); 
    return minimo + (rand() % (maximo - minimo + 1));
}

int main() {
    int numero = generarNumeroAleatorio(1, 100);
    std::cout << "Número aleatorio entre 1 y 100: " << numero << std::endl;
    return 0;
}
