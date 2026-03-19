#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r, h;
    cout << "Radio: ";
    cin >> r;
    cout << "Altura: ";
    cin >> h;

    double volumen = M_PI * pow(r,2) * h;

    cout << "Volumen: " << volumen << endl;

    return 0;
}