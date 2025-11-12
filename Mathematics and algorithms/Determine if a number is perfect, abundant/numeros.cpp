#include "numeros.h"

bool esperfecto(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma == n;
}

bool esabundante(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma > n;
}

bool estriangular(int n) {
    int suma = 0;
    int i = 1;
    while (suma < n) {
        suma += i;
        if (suma == n) {
            return true;
        }
        i++;
    }
    return false;
}
