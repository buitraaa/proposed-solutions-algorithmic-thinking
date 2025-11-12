#include "taylor.h"
#include <cmath>

double calcularlogaritmo(double x, int terminos) {
    double suma = 0.0;
    double termino;
    int signo = 1;

    for (int n = 1; n <= terminos; n++) {
        termino = signo * (pow(x, n) / n);
        suma += termino;
        signo = -signo;
    }
    return suma;
}
