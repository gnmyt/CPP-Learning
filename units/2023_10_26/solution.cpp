#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    double Umsatz, Provision;

    // Eingaben abfragen
    cout << "Geben Sie den Umsatz ein: ";
    cin >> Umsatz;

    // Berechnung
    if (Umsatz < 100000) {
        Provision = Umsatz * 0.05;
    } else {
        Provision = Umsatz * 0.75;
    }

    // Ausgabe
    cout << "Die Provision beträgt: " << Provision << " Euro." << endl;
}