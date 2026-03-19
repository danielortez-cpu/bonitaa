#include <iostream>
using namespace std;

int main() {
    double mpg;
    cout << "Ingrese MPG: ";
    cin >> mpg;

    double l100 = 235.215 / mpg;

    cout << "L/100km: " << l100 << endl;

    return 0;
}