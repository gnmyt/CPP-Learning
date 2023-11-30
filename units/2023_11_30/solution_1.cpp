#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    int x, y, z;

    // Eingabe
    cout << "Bitte geben Sie x ein: ";
    cin >> x;

    // Variableninitialisierung
    y = 3;
    z = x * y;

    // Berechnung
    while (x > 0) {
        y += 2;
        z--;

        if (z > 3) {
            z -= 2;
        } else {
            z += 2;
        }

        x--;
    }

    // Ausgabe
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}