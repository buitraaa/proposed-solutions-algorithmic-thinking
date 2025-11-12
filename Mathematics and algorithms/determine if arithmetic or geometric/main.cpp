#include <iostream>
#include "secuencia.h"
using namespace std;

int main() {
    int n;
    cout << "Cantidad de terminos: ";
    cin >> n;

    float numeros[100];
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    if (esAritmetica(numeros, n))
        cout << "La secuencia es aritmetica";
    else if (esGeometrica(numeros, n))
        cout << "La secuencia es geometrica";
    else
        cout << "La secuencia no es ni aritmetica ni geometrica";
        
    cin.get();
    return 0;
}
