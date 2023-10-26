#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    int Anzahl, Dauer;
    double Stueckpreis, RabattProzent, RabattEuro;

    // Eingaben abfragen
    cout << "Geben Sie die Anzahl ein:  ";
    cin >> Anzahl;

    cout << "Geben Sie den Einzelpreis ein:  ";
    cin >> Stueckpreis;

    cout << "Geben Sie die Dauer der Geschaeftsbeziehung ein:  ";
    cin >> Dauer;

    // Berechnen
    if (Anzahl <= 500) {
        RabattProzent = 0.02;
    } else if (Anzahl <= 1000) {
        RabattProzent = 0.05;
    } else {
        RabattProzent = 0.10;
    }

    RabattProzent = (Dauer > 10 && Anzahl > 1000) ? RabattProzent + 0.05 : RabattProzent;
    RabattEuro = Anzahl * Stueckpreis * RabattProzent;

    // Ausgabe
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << endl;

    cout << "Sie erhalten " << (RabattProzent * 100) << "% Rabatt." << endl;

    cout << "Der Rabatt betraegt: " << RabattEuro << " Euro." << endl;
}