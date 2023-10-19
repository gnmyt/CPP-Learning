#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    double netto, taxes, brutto;
    int tables, price;

    cout << "Geben Sie die Anzahl der Tische ein: ";
    cin >> tables;

    cout << "Geben Sie den Einzelpreis ein: ";
    cin >> price;

    netto = tables * price;
    taxes = netto * 0.19;

    brutto = netto + taxes;

    cout << "Nettobetrag: " << netto << " Euro" << endl;
    cout << "Mehrwertsteuer: " << taxes << " Euro" << endl;

    cout << "---------------------------------------------------" << endl;
    cout << "Bruttobetrag: " << brutto << " Euro" << endl;
}