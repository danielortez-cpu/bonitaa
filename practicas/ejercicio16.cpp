#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Radio: ";
    cin >> r;

    double area = M_PI * pow(r, 2);
    double volumen = (4.0/3.0) * M_PI * pow(r, 3);

    cout << "Area: " << area << endl;
    cout << "Volumen: " << volumen << endl;

    return 0;
}