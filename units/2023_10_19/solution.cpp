#include <iostream>

using namespace std;

int main() {
    // Variablen deklarieren
    int amount, price;

    // Benutzer nach Menge und Einzelpreis fragen
    cout << "Geben Sie die Menge ein: ";
    cin >> amount;

    cout << "Geben Sie den Einzelpreis ein: ";
    cin >> price;

    // Ergebnis ausgeben
    cout << "Der Gesamtpreis betraegt " << amount * price << " Euro." << endl;
}