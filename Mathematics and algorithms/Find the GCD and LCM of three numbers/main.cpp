#include <iostream>
#include "mcdmcm.h"
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    int mcd = calcularmcd(num1, num2);
    int mcm = calcularmcm(num1, num2);

    cout << "MCD: " << mcd << endl;
    cout << "MCM: " << mcm << endl;
    cin.ignore();  
    cout << "Presiona Enter para salir...";
    cin.get();     

    return 0;
}
