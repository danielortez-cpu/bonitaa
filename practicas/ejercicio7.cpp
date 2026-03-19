#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int suma = n * (n + 1) / 2;

    cout << "La suma es: " << suma << endl;

    return 0;
}