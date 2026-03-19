#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double h;
    cout << "Altura (m): ";
    cin >> h;

    double g = 9.8;
    double v = sqrt(2 * g * h);

    cout << "Velocidad: " << v << " m/s" << endl;

    return 0;
}