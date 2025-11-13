#include <iostream>
using namespace std;

void imprimirzigzag(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= n; j++) {
                cout << num << " ";
                num++;
            }
        } else {
            int temp = num + n - 1;
            for (int j = 1; j <= n; j++) {
                cout << temp << " ";
                temp--;
                num++;
            }
        }
        cout << endl;
    }
}
