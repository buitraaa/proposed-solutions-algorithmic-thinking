#include "roots.h"
#include <cmath>

double calcularraizcuadrada(double a) {
    if (a == 0.0) return 0.0;
    if (a < 0.0) return -1.0; // señal de error: no soporta sqrt de negativos

    double x = a;
    double siguiente = 0.0;
    int iter = 0;
    while (iter < 1000) {
        siguiente = 0.5 * (x + a / x);
        if (fabs(siguiente - x) < 1e-12) break;
        x = siguiente;
        iter++;
    }
    return siguiente;
}

double calcularraizcubica(double a) {
    if (a == 0.0) return 0.0;

    double x = a;
    if (x < 0.0) x = a; // inicio negativo si a es negativo

    double siguiente = 0.0;
    int iter = 0;
    while (iter < 1000) {
        // x_{n+1} = (2*x_n + a / (x_n^2)) / 3
        siguiente = (2.0 * x + a / (x * x)) / 3.0;
        if (fabs(siguiente - x) < 1e-12) break;
        x = siguiente;
        iter++;
    }
    return siguiente;
}
