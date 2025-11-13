#include <iostream>
#include "figuras.h"
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamano N: ";
    cin >> n;
    imprimirx(n);
    cout << endl;
    imprimirz(n);
    cout << endl;
    imprimirtfloyd(n);
    cout << endl;
    imprimirtpascal(n);
    cin.get();
    cin.get();
    return 0;
}
