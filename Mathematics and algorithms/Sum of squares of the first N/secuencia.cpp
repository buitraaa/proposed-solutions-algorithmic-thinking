#include "secuencia.h"

bool esAritmetica(float arr[], int n) {
    float diferencia = arr[1] - arr[0];
    for (int i = 2; i < n; i++) {
        if (arr[i] - arr[i - 1] != diferencia)
            return false;
    }
    return true;
}

bool esGeometrica(float arr[], int n) {
    if (arr[0] == 0) return false;
    float razon = arr[1] / arr[0];
    for (int i = 2; i < n; i++) {
        if (arr[i - 1] == 0 || arr[i] / arr[i - 1] != razon)
            return false;
    }
    return true;
}
