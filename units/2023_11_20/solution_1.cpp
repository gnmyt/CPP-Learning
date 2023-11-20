#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    double length, width, height, volume;
    char restart;

    while (restart != 'n') {
        cout << "Geben Sie die Laenge ein: ";
        cin >> length;

        cout << "Geben Sie die Breite ein: ";
        cin >> width;

        cout << "Geben Sie die Hoehe ein: ";
        cin >> height;

        // Berechnung
        volume = length * width * height;

        // Ausgabe
        cout.setf(ios::fixed);
        cout.precision(1);

        cout << "Volumen: " << volume << " m3" << endl;

        // Wiederholung
        cout << "Wollen Sie nochmal? (j/n): ";
        cin >> restart;
    }
}