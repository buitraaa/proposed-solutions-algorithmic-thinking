#include <iostream>
#include "roots.h"
using namespace std;

int main() {
    int opcion;
    double valor;

    cout << "Elige opcion (1=sqrt, 2=cbrt): ";
    cin >> opcion;
    cout << "Ingresa el numero: ";
    cin >> valor;

    if (opcion == 1) {
        if (valor < 0) {
            cout << "Error: no se puede calcular la raiz cuadrada de un negativo con esta funcion." << endl;
        } else {
            double r = calcularraizcuadrada(valor);
            cout << "Raiz cuadrada aproximada: " << r << endl;
        }
    } else if (opcion == 2) {
        double r = calcularraizcubica(valor);
        cout << "Raiz cubica aproximada: " << r << endl;
    } else {
        cout << "Opcion no valida." << endl;
    }

    system("pause");
    return 0;
}
