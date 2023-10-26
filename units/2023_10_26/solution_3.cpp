#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    int Maeuse, Einzelpreis;
    double Nettowarenwert, Transportpauschale, Umsatzsteuer, Bruttobetrag;

    // Eingabe
    cout << "Geben Sie die Anzahl der PC-Maeuse ein: ";
    cin >> Maeuse;

    cout << "Geben Sie den Einzelpreis ein: ";
    cin >> Einzelpreis;

    // Berechnung
    Nettowarenwert = Maeuse * Einzelpreis;
    Transportpauschale = Maeuse >= 10 ? 0 : 10;
    Umsatzsteuer = (Nettowarenwert + Transportpauschale) * 0.19;
    Bruttobetrag = Nettowarenwert + Transportpauschale + Umsatzsteuer;


    // Ausgabe
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << endl;

    cout << "Nettowarenwert        :  " << Nettowarenwert << " Euro" << endl;
    cout << "+ Transportpauschale  :  " << Transportpauschale << " Euro" << endl;
    cout << "+ Umsatzsteuer        :  " << Umsatzsteuer << " Euro" << endl;
    cout << "------------------------------------" << endl;
    cout << "= Bruttobetrag  :  " << Bruttobetrag << " Euro" << endl;
}