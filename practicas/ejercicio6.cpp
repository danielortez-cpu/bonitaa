#include <iostream>
using namespace std;

int main() {
    double comida, impuesto, propina, total;
    const double tasa_impuesto = 0.13;

    cout << "Costo de la comida: ";
    cin >> comida;

    impuesto = comida * tasa_impuesto;
    propina = comida * 0.18;
    total = comida + impuesto + propina;

    cout << "Impuesto: " << impuesto << endl;
    cout << "Propina: " << propina << endl;
    cout << "Total: " << total << endl;

    return 0;
}