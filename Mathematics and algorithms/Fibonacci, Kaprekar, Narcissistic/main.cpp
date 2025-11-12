#include <iostream>
#include "numerosespeciales.h"
using namespace std;

int main() {
    int num;

    cout << "Ingresa un numero positivo: ";
    cin >> num;

    if (num > 0) {
        if (esfibonacci(num)) cout << "El numero es Fibonacci." << endl;
        if (eskaprekar(num)) cout << "El numero es Kaprekar." << endl;
        if (esnarcisista(num)) cout << "El numero es Narcisista." << endl;
        if (esmersenne(num)) cout << "El numero es Mersenne." << endl;

        if (!esfibonacci(num) && !eskaprekar(num) && !esnarcisista(num) && !esmersenne(num))
            cout << "El numero no pertenece a ninguna categoria especial." << endl;
    } else {
        cout << "Debes ingresar un numero positivo." << endl;
    }

    system("pause");
    return 0;
}
