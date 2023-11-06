#include <iostream>

using namespace std;

int main() {
    // Variablen deklarieren
    int Vorjahreseinkommen, Betriebszugehoerigkeit;
    double PraemieProzent, PraemieEuro;

    // Eingaben einlesen
    cout << "Vorjahreseinkommen: ";
    cin >> Vorjahreseinkommen;

    cout << "Betriebszugehoerigkeit: ";
    cin >> Betriebszugehoerigkeit;

    // Berechnen
    if (Betriebszugehoerigkeit < 2) {
        PraemieProzent = 0.05;
    } else if (Betriebszugehoerigkeit < 5) {
        PraemieProzent = 0.1;
    } else if (Betriebszugehoerigkeit < 15) {
        PraemieProzent = 0.15;
    } else {
        PraemieProzent = 0.2;
    }

    PraemieEuro = Vorjahreseinkommen * PraemieProzent;

    // Ausgabe
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Sie erhalten " << PraemieProzent * 100 << " % Prämie." << endl;
    cout << "Die Praemie betraegt " << PraemieEuro << " Euro." << endl;
}