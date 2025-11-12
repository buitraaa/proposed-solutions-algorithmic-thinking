#ifndef SEQUENCES_H
#define SEQUENCES_H

void generar_fibonacci(int n, long long* a);
void generar_lucas(int n, long long* a);
void generar_padovan(int n, long long* a);
void generar_todas(int n, long long** m);

void imprimir_arreglo(const long long* a, int n);
void imprimir_matriz(long long** m, int filas, int cols);

#endif
