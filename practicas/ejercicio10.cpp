#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;
    cout << "Division: " << (double)a / b << endl;
    cout << "Residuo: " << a % b << endl;
    cout << "log10(a): " << log10(a) << endl;
    cout << "a^b: " << pow(a, b) << endl;

    return 0;
}