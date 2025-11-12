#include <iostream>
#include "mathfuncs.h"
using namespace std;

int main() {
    int opcion;
    cout << "1. Teorema del binomio\n2. Aproximacion de Stirling\nElige opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        int n;
        cout << "Ingresa el exponente n: ";
        cin >> n;
        expandirbinomio(n);
    } else if (opcion == 2) {
        double n;
        cout << "Ingresa un numero: ";
        cin >> n;
        double resultado = calcularstirling(n);
        cout << "Aproximacion de n! por Stirling: " << resultado << endl;
    } else {
        cout << "Opcion no valida." << endl;
    }

    system("pause");
    return 0;
}
