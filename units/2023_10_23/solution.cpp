#include <iostream>

using namespace std;

int main() {
    // Variablen deklarieren
    int zahl1, zahl2;

    // Eingaben einlesen
    cout << "Bitte geben Sie die erste Zahl ein: ";
    cin >> zahl1;

    cout << "Bitte geben Sie die zweite Zahl ein: ";
    cin >> zahl2;

    // Größeren Wert ausgeben
    if (zahl1 > zahl2) {
        cout << "Die erste Zahl ist größer als die zweite Zahl. (" << zahl1 << " > " << zahl2 << ")" << endl;
    } else if (zahl1 < zahl2) {
        cout << "Die zweite Zahl ist größer als die erste Zahl. (" << zahl2 << " > " << zahl1 << ")" << endl;
    } else {
        cout << "Die beiden Zahlen sind gleich groß. (" << zahl1 << " = " << zahl2 << ")" << endl;
    }


}