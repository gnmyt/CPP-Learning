#include <iostream>

using namespace std;



int main() {
    // Variablen deklarieren
    int amount, price, discount, cashDiscount;
    double total;

    // Eingaben einlesen
    cout << "Eingabe Menge: ";
    cin >> amount;

    cout << "Eingabe Einzelpreis: ";
    cin >> price;

    cout << "Eingabe Rabatt (in %): ";
    cin >> discount;

    cout << "Eingabe Skonto (in %): ";
    cin >> cashDiscount;

    // Berechnen
    total = amount * price;
    cout << "Listeneinkaufspreis: " << total << " Euro" << endl;

    double tempDiscount = total * (discount * 0.01);
    total = total - tempDiscount;

    cout << "-  Rabatt (" << discount << "%): " << tempDiscount << " Euro" << endl;
    cout << "     = Zieleinkaufspreis: " << total << " Euro" << endl;

    tempDiscount = total * (cashDiscount * 0.01);
    total = total - tempDiscount;

    cout << "-  Skonto (" << cashDiscount << "%): " << tempDiscount << " Euro" << endl;
    cout << "     = Barzahlungsbetrag: " << total << " Euro" << endl;

    double tempTaxes = total * 0.19;
    total = total + tempTaxes;

    cout << "+  USt (19%): " << tempTaxes << " Euro" << endl;
    cout << "     = Bareinkaufspreis (brutto): " << total << " Euro" <<  endl;
}