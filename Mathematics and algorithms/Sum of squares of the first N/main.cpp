#include <iostream>
#include "sumaimpares.h"
using namespace std;

int main() {
    int n;
    cout << "Ingrese el valor de N: ";
    cin >> n;
    cout << "La suma de los cuadrados de los primeros " << n << " numeros impares es: " << sumaimpares(n) << endl;
    cin.get();
    cin.get();
    return 0;
}
