#include <iostream>
#include "heron.h"
using namespace std;

int main() {
    float a, b, c;

    cout << "Ingresa el primer lado: ";
    cin >> a;
    cout << "Ingresa el segundo lado: ";
    cin >> b;
    cout << "Ingresa el tercer lado: ";
    cin >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float area = calculararea(a, b, c);
        cout << "El area del triangulo es: " << area << endl;
    } else {
        cout << "Los lados no forman un triangulo valido." << endl;
    }

    system("pause");
    return 0;
}
