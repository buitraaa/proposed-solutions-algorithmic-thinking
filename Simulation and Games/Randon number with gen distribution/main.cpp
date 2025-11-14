#include <iostream>
#include "randomgen.h"
using namespace std;

int main() {
    int cantidad;
    cout << "Ingrese cuantos valores desea generar: ";
    cin >> cantidad;

    cout << "Uniforme (0 a 1):" << endl;
    generaruniforme(cantidad);

    cout << endl << "Normal (media 0, desviacion 1):" << endl;
    generarnormal(cantidad);

    return 0;
}
