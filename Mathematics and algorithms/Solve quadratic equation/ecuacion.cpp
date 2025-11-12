#include "ecuacion.h"
#include <iostream>
#include <cmath>
using namespace std;

void resolverecuacion(float a, float b, float c) {
    float discriminante = (b * b) - (4 * a * c);

    if (discriminante > 0) {
        float x1 = (-b + sqrt(discriminante)) / (2 * a);
        float x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Dos soluciones reales:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (discriminante == 0) {
        float x = -b / (2 * a);
        cout << "Una solucion real:" << endl;
        cout << "x = " << x << endl;
    } else {
        cout << "No hay soluciones reales." << endl;
    }
}
