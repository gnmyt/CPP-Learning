#include <iostream>

using namespace std;

int main() {
    // Variablen deklarieren
    int length, width;

    // Benutzer nach Laenge und Breite fragen
    cout << "Geben Sie die Laenge (in cm) ein: ";
    cin >> length;

    cout << "Geben Sie die Breite (in cm) ein: ";
    cin >> width;

    int perimeter = 2 * (length + width);
    int area = length * width;

    // Ergebnis ausgeben
    cout << "Der Umfang betraegt " << perimeter << " cm." << endl;
    cout << "Die Flaeche betraegt " << area << " qcm.." << endl;
}