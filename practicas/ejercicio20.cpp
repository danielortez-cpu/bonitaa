#include <iostream>
using namespace std;

int main() {
    double P, V, T;
    cout << "Presion: ";
    cin >> P;
    cout << "Volumen: ";
    cin >> V;
    cout << "Temperatura: ";
    cin >> T;

    double R = 8.314;
    double n = (P * V) / (R * T);

    cout << "Moles: " << n << endl;

    return 0;
}