#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    int Anzahl, Einzelpreis,  Kategorie;
    double Warenwert, RabattProzent, RabattEuro, Netto, Umsatzsteuer, Brutto;

    // Eingaben
    cout << "Geben Sie die Anzahl der Maeuse ein: ";
    cin >> Anzahl;

    cout << "Geben Sie den Einzelpreis ein:";
    cin >> Einzelpreis;

    cout << "Geben Sie die Kundenkategorie ein: ";
    cin >> Kategorie;

    // Berechnen
    Warenwert = Anzahl * Einzelpreis;

    switch (Kategorie) {
        case 1:
            RabattProzent = 0.1;
            break;
        case 2:
            RabattProzent = 0.12;
            break;
        case 3:
            RabattProzent = 0.15;
            break;
        case 4:
            RabattProzent = 0.2;
            break;
        case 5:
            RabattProzent = 0.3;
            break;
        default:
            RabattProzent = 0;
            break;
    }
    RabattEuro = Warenwert * RabattProzent;
    Netto = Warenwert - RabattEuro;
    Umsatzsteuer = Netto * 0.19;
    Brutto = Netto + Umsatzsteuer;

    // Ausgabe
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << endl;
    cout << "Warenwert  : " << Warenwert << " Euro" << endl;
    cout << "Rabatt (" << (RabattProzent * 100) << "%): " << RabattEuro << " Euro" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Nettobetrag : " << Netto << " Euro" << endl;
    cout << "Umsatzsteuer: " << Umsatzsteuer << " Euro" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Bruttobetrag: " << Brutto << " Euro" << endl;
}