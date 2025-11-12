#include <iostream>
#include "rectangulo.h"
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese el numero de filas (N): ";
    cin >> n;
    cout << "Ingrese el numero de columnas (M): ";
    cin >> m;
    imprimirrectangulo(n, m);
    cin.get();
    cin.get();
    return 0;
}
