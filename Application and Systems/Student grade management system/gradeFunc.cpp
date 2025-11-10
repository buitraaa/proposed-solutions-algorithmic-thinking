#include <iostream>
#include "gradeFunc.h"
using namespace std;

int numNotas;

float procesarNotas() {
    cout << "¿Cuántas notas vas a ingresar? ";
    cin >> numNotas;

    float* notas = new float[numNotas]; 

    for (int i = 0; i < numNotas; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    float sum = 0;
    for (int i = 0; i < numNotas; i++) {
        sum += notas[i];
    }

    float average = sum / numNotas;
    cout << "El promedio es: " << average << endl;
    cout << "Presiona Enter para salir..." << endl;
    cin.get();

    return average;
}
