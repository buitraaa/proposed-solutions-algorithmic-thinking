#include <iostream>
#include "ecuacion.h"
using namespace std;

int main() {
    float a, b, c;

    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;

    if (a == 0) {
        cout << "No es una ecuacion cuadratica." << endl;
    } else {
        resolverecuacion(a, b, c);
    }

    system("pause");
    return 0;
}
