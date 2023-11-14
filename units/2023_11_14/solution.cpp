#include <iostream>

using namespace std;

int main() {
    // Variablen deklarieren
    int Sekunden, Jahre, Tage, Stunden, Minuten;

    // Eingaben einlesen
    cout << "Welchen Sekundenwert wollen Sie zerlegen? ";
    cin >> Sekunden;

    // Berechnen
    Jahre = Sekunden / (24 * 3600 * 365);
    Sekunden = Sekunden % (24 * 3600 * 365);

    Tage = Sekunden / (24 * 3600);
    Sekunden = Sekunden % (24 * 3600);
    Stunden = Sekunden / 3600;
    Sekunden = Sekunden % 3600;
    Minuten = Sekunden / 60;
    Sekunden = Sekunden % 60;

    // Ausgabe
    cout << Sekunden << " Sekunden entsprechen: " << endl;
    cout << Jahre << " Jahren, " << Tage << " Tagen, " << Stunden << " Stunden, " << Minuten << " Minuten, " << Sekunden << " Sekunden.";
}