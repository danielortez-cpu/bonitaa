#include <iostream>
using namespace std;

int main() {
    double m, deltaT;
    cout << "Masa (g): ";
    cin >> m;
    cout << "Cambio de temperatura: ";
    cin >> deltaT;

    double Q = m * 4.186 * deltaT;

    double kWh = Q / 3600000;
    double costo = kWh * 0.085;

    cout << "Energia: " << Q << " J" << endl;
    cout << "Costo: $" << costo << endl;

    return 0;
}