#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void lanzardado(int veces) {
    srand(time(0));
    for (int i = 1; i <= veces; i++) {
        int resultado = 1 + rand() % 6;
        cout << "Lanzamiento " << i << ": " << resultado << endl;
    }
}
