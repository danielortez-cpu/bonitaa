#include <iostream>
using namespace std;

int main() {
    double dinero;
    cout << "Dinero inicial: ";
    cin >> dinero;

    for (int i = 1; i <= 3; i++) {
        dinero += dinero * 0.04;
        cout << "Año " << i << ": " << dinero << endl;
    }

    return 0;
}