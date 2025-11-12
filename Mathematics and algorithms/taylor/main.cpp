#include <iostream>
#include <cmath>
#include "taylor.h"
using namespace std;

int main() {
    double x;
    int terminos;

    cout << "Aproximacion de ln(1+x) usando serie de Taylor\n";
    cout << "Ingresa el valor de x (entre -1 y 1): ";
    cin >> x;
    cout << "Cuantos terminos deseas usar: ";
    cin >> terminos;

    if (x <= -1) {
        cout << "Error: la serie no converge para ese valor de x." << endl;
    } else {
        double resultado = calcularlogaritmo(x, terminos);
        cout << "ln(1+" << x << ") ≈ " << resultado << endl;
    }

    system("pause");
    return 0;
}
