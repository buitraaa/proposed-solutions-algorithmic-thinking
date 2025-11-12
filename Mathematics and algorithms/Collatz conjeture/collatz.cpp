#include "collatz.h"
#include <iostream>
using namespace std;

void collatz(int n) {
    cout << "Secuencia de Collatz: " << endl;

    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
    }
    cout << n << endl; 
}
