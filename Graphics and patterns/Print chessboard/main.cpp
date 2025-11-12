#include <iostream>
#include "tablero.h"
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese filas (N): ";
    cin >> n;
    cout << "Ingrese columnas (M): ";
    cin >> m;
    imprimirtablero(n, m);
    cin.get();
    cin.get();
    return 0;
}
