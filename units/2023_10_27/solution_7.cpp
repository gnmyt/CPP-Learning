#include <iostream>

using namespace std;

int main() {
    // Variablen deklarieren
    int Jahr;
    bool Schaltjahr;

    // Eingaben einlesen
    cout << "Geben Sie eine Jahreszahl ein: ";
    cin >> Jahr;

    // Berechnen
    Schaltjahr = (Jahr % 4 == 0 && Jahr % 100 != 0) || Jahr % 400 == 0;

    // Ausgabe
    cout << "Das Jahr ist " << (Schaltjahr ? "ein " : "kein ") << "Schaltjahr." << endl;
}