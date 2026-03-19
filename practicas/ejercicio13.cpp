#include <iostream>
using namespace std;

int main() {
    int centavos;
    cout << "Ingrese cantidad en centavos: ";
    cin >> centavos;

    int monedas25 = centavos / 25;
    centavos %= 25;

    int monedas10 = centavos / 10;
    centavos %= 10;

    int monedas5 = centavos / 5;
    centavos %= 5;

    int monedas1 = centavos;

    cout << "25c: " << monedas25 << endl;
    cout << "10c: " << monedas10 << endl;
    cout << "5c: " << monedas5 << endl;
    cout << "1c: " << monedas1 << endl;

    return 0;
}