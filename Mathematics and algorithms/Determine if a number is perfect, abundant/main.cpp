#include <iostream>
#include "numeros.h"
using namespace std;

int main() {
    int num;

    cout << "Ingresa un numero positivo: ";
    cin >> num;

    if (num > 0) {
        if (esperfecto(num)) {
            cout << "El numero es perfecto." << endl;
        } else if (esabundante(num)) {
            cout << "El numero es abundante." << endl;
        } else {
            cout << "El numero no es perfecto ni abundante." << endl;
        }

        if (estriangular(num)) {
            cout << "El numero tambien es triangular." << endl;
        } else {
            cout << "El numero no es triangular." << endl;
        }
    } else {
        cout << "Debes ingresar un numero positivo." << endl;
    }

    system("pause");
    return 0;
}
