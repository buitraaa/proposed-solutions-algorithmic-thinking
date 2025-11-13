#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void jugaradivinar() {
    srand(time(0));
    int secreto = 1 + rand() % 20;
    int intento = 0;

    cout << "Adivina el numero entre 1 y 20:" << endl;

    while (intento != secreto) {
        cout << "Tu intento: ";
        cin >> intento;

        if (intento < secreto) {
            cout << "Muy bajo." << endl;
        } else if (intento > secreto) {
            cout << "Muy alto." << endl;
        } else {
            cout << "¡Correcto! El numero era " << secreto << endl;
        }
    }
}
