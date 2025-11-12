#include <iostream>
#include "collatz.h"
using namespace std;

int main() {
    int num;

    cout << "Ingresa un numero positivo: ";
    cin >> num;

    if (num > 0) {
        collatz(num);
    } else {
        cout << "Debes ingresar un numero positivo." << endl;
    }

    system("pause");
    return 0;
}
