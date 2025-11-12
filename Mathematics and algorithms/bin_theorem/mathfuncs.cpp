#include "mathfuncs.h"
#include <iostream>
#include <cmath>
using namespace std;

double calcularstirling(double n) {
    if (n == 0) return 1;
    double pi = 3.141592653589793;
    return sqrt(2 * pi * n) * pow(n / exp(1), n);
}

double calcularbinomial(int n, int k) {
    double num = 1, den = 1;
    for (int i = 1; i <= k; i++) {
        num *= (n - i + 1);
        den *= i;
    }
    return num / den;
}

void expandirbinomio(int n) {
    cout << "(a + b)^" << n << " = ";
    for (int k = 0; k <= n; k++) {
        double c = calcularbinomial(n, k);
        cout << c << "*a^" << (n - k) << "*b^" << k;
        if (k != n) cout << " + ";
    }
    cout << endl;
}
