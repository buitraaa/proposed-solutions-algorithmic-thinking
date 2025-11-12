#include "pi.h"

double estimarpi(int terminos) {
    double suma = 0.0;
    for (int i = 0; i < terminos; i++) {
        int signo = (i % 2 == 0) ? 1 : -1;
        double termino = signo / (2.0 * i + 1.0);
        suma += termino;
    }
    double pi = 4.0 * suma;
    return pi;
}
