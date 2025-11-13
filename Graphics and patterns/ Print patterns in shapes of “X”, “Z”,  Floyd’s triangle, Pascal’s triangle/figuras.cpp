#include <iostream>
using namespace std;

void imprimirx(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == n - i + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void imprimirz(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == n - i + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void imprimirtfloyd(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void imprimirtpascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int val = 1;
            for (int k = 0; k < j; k++) {
                val = val * (i - k) / (k + 1);
            }
            cout << val << " ";
        }
        cout << endl;
    }
}
