#include <iostream>
#include "dado.h"
using namespace std;

int main() {
    int veces;
    cout << "¿Cuantas veces desea lanzar el dado? ";
    cin >> veces;
    lanzardado(veces);
    cin.get();
    cin.get();
    return 0;
}
