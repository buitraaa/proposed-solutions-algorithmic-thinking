#include <iostream>
using namespace std;

void imprimirtablero(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
                cout << "*";
            } else {
                cout << "+";
            }
        }
        cout << endl;
    }
}
