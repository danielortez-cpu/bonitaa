#include <iostream>
using namespace std;

int main() {
    int pies, pulgadas;
    cout << "Pies: ";
    cin >> pies;
    cout << "Pulgadas: ";
    cin >> pulgadas;

    int total_pulgadas = pies * 12 + pulgadas;
    double cm = total_pulgadas * 2.54;

    cout << "Altura en cm: " << cm << endl;

    return 0;
}