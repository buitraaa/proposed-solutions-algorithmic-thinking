#include "euler.h"

float estimareuler(int n) {
    float e = 1.0;
    float factorial = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
        e = e + (1.0 / factorial);
    }

    return e;
}
