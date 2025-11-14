#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void generaruniforme(int n) {
    srand(time(0));
    for (int i = 1; i <= n; i++) {
        double u = (double) rand() / RAND_MAX;
        cout << u << endl;
    }
}

void generarnormal(int n) {
    srand(time(0) + 5);
    for (int i = 1; i <= n; i++) {
        double u1 = (double) rand() / RAND_MAX;
        double u2 = (double) rand() / RAND_MAX;

        double z = sqrt(-2 * log(u1)) * cos(2 * 3.14159 * u2);
        cout << z << endl;
    }
}
