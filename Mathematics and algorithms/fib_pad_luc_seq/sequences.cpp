#include "sequences.h"
#include <iostream>

void generar_fibonacci(int n, long long* a) {
    if (n <= 0) return;
    a[0] = 0;
    if (n > 1) a[1] = 1;
    int i = 2;
    while (i < n) {
        a[i] = a[i - 1] + a[i - 2];
        i = i + 1;
    }
}

void generar_lucas(int n, long long* a) {
    if (n <= 0) return;
    a[0] = 2;
    if (n > 1) a[1] = 1;
    for (int i = 2; i < n; i = i + 1) {
        a[i] = a[i - 1] + a[i - 2];
    }
}

void generar_padovan(int n, long long* a) {
    if (n <= 0) return;
    a[0] = 1;
    if (n > 1) a[1] = 1;
    if (n > 2) a[2] = 1;
    int i = 3;
    do {
        if (i >= n) break;
        a[i] = a[i - 2] + a[i - 3];
        i = i + 1;
    } while (true);
}

void generar_todas(int n, long long** m) {
    if (n <= 0) return;
    long long* f = new long long[n];
    long long* l = new long long[n];
    long long* p = new long long[n];

    generar_fibonacci(n, f);
    generar_lucas(n, l);
    generar_padovan(n, p);

    for (int i = 0; i < n; i = i + 1) {
        m[i][0] = f[i];
        m[i][1] = l[i];
        m[i][2] = p[i];
    }

    delete[] f;
    delete[] l;
    delete[] p;
}

void imprimir_arreglo(const long long* a, int n) {
    for (int i = 0; i < n; i = i + 1) {
        std::cout << a[i];
        if (i < n - 1) std::cout << " ";
    }
    std::cout << "\n";
}

void imprimir_matriz(long long** m, int filas, int cols) {
    for (int i = 0; i < filas; i = i + 1) {
        for (int j = 0; j < cols; j = j + 1) {
            std::cout << m[i][j];
            if (j < cols - 1) std::cout << " ";
        }
        std::cout << "\n";
    }
}