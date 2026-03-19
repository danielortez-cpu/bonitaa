#include <iostream>
using namespace std;

int main() {
    double pies;
    cout << "Ingrese pies: ";
    cin >> pies;

    cout << "Pulgadas: " << pies * 12 << endl;
    cout << "Yardas: " << pies / 3 << endl;
    cout << "Millas: " << pies / 5280 << endl;

    return 0;
}