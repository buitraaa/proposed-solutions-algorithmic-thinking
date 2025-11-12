#include <iostream>
#include "pi.h"
using namespace std;

int main() {
    int terminos;
    cout << "Cuantos terminos quieres usar para aproximar pi (entero positivo)? ";
    cin >> terminos;

    if (terminos > 0) {
        double aproximacion = estimarpi(terminos);
        cout << "Aproximacion de pi con " << terminos << " terminos: " << aproximacion << endl;
    } else {
        cout << "Debes ingresar un entero positivo." << endl;
    }

    system("pause");
    return 0;
}
