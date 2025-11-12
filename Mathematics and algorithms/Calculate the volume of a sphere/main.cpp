#include <iostream>
#include "esfera.h"
using namespace std;

int main() {
    float radio;

    cout << "Ingresa el radio de la esfera: ";
    cin >> radio;

    if (radio > 0) {
        float volumen = calcularvolumen(radio);
        cout << "El volumen de la esfera es: " << volumen << endl;
    } else {
        cout << "El radio debe ser positivo." << endl;
    }

    system("pause");
    return 0;
}
