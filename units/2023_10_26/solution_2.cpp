#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    int Maeuse, Einzelpreis;
    double Warenwert, Rabatt, Netto, Umsatz, Brutto;

    // Eingaben abfragen
    cout << "Geben Sie die Anzahl der Mäuse ein: ";
    cin >> Maeuse;

    cout << "Geben Sie den Einzelpreis ein: ";
    cin >> Einzelpreis;

    // Berechnen
    Warenwert = Maeuse * Einzelpreis;

    if (Warenwert < 100) {
        Rabatt = 0.10;
    } else if (Warenwert < 500) {
        Rabatt = 0.15;
    } else {
        Rabatt = 0.20;
    }

    Netto = Warenwert - (Warenwert * Rabatt);
    Umsatz = Netto * 0.19;
    Brutto = Netto + Umsatz;

    // Ausgabe
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Warenwert   :  " << Warenwert << " Euro" << endl;
    cout << "Rabatt (" << (Rabatt * 100) << "%)   :  " << (Warenwert * Rabatt) << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "Nettobetrag   :  " << Netto << endl;
    cout << "Umsatzsteuer   :   " << Umsatz << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "Bruttobetrag   : " << Brutto << endl;
}