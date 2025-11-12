#include <iostream>
#include "euler.h"
using namespace std;

int main() {
    int terminos;

    cout << "Cuantos terminos deseas usar para estimar e? ";
    cin >> terminos;

    if (terminos >= 0) {
        float resultado = estimareuler(terminos);
        cout << "El numero e aproximado es: " << resultado << endl;
    } else {
        cout << "Debes ingresar un numero no negativo." << endl;
    }

    system("pause");
    return 0;
}
