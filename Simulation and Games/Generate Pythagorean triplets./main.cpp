#include <iostream>
#include "pitagoras.h"
using namespace std;

int main() {
    int n;
    cout << "Ingrese el limite N: ";
    cin >> n;
    generarpitagoras(n);
    cin.get();
    cin.get();
    return 0;
}
