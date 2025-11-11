#include <iostream>
#include "conversion.h"

std::string decimalABinario(int numero) {
    if (numero == 0) {
        return "0";
    }

    bool esNegativo = false;
    if (numero < 0) {
        esNegativo = true;
        numero = -numero; 
    }

    std::string binario = "";

    while (numero > 0) {
        int resto = numero % 2;
        binario = std::to_string(resto) + binario; 
        numero /= 2;
    }

    if (esNegativo) {
        binario = "-" + binario;
    }

    return binario;
}

int main() {
    int n;
    std::cout << "Ingresa un numero decimal: ";
    std::cin >> n;

    std::string resultado = decimalABinario(n);
    std::cout << "En binario: " << resultado << std::endl;

    return 0;
}
