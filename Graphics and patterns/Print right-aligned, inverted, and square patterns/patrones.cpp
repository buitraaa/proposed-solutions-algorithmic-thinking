#include <iostream>
using namespace std;

void imprimiralineado() {
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void imprimirinvertido() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void imprimercuadrado() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
