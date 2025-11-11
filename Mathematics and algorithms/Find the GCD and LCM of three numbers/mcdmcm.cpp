#include "mcdmcm.h"

int calcularmcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int calcularmcm(int a, int b) {
    int mcd = calcularmcd(a, b);
    int mcm = (a * b) / mcd;
    return mcm;
}
