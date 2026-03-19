#include <iostream>
using namespace std;

int main() {
    int widgets, gizmos;
    cout << "Cantidad de widgets: ";
    cin >> widgets;
    cout << "Cantidad de gizmos: ";
    cin >> gizmos;

    int peso = widgets * 75 + gizmos * 112;

    cout << "Peso total: " << peso << " gramos" << endl;

    return 0;
}