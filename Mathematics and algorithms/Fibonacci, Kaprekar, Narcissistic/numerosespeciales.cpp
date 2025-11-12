#include "numerosespeciales.h"
#include <cmath>

bool esfibonacci(int n) {
    int a = 0, b = 1, temp;
    while (b < n) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b == n || n == 0;
}

bool eskaprekar(int n) {
    if (n == 1) return true;
    long cuadrado = (long)n * n;
    int contador = 0;
    long temp = cuadrado;
    while (temp > 0) {
        contador++;
        temp /= 10;
    }

    for (int i = 1; i < contador; i++) {
        long divisor = pow(10, i);
        long parte1 = cuadrado / divisor;
        long parte2 = cuadrado % divisor;
        if (parte2 > 0 && parte1 + parte2 == n) return true;
    }
    return false;
}

bool esnarcisista(int n) {
    int original = n, digitos = 0, suma = 0, temp = n;
    while (temp > 0) {
        digitos++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digito = temp % 10;
        suma += pow(digito, digitos);
        temp /= 10;
    }

    return suma == original;
}

bool esmersenne(int n) {
    int p = 1;
    while (pow(2, p) - 1 < n) {
        p++;
    }
    return pow(2, p) - 1 == n;
}
