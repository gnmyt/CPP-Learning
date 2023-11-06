#include <iostream>

using namespace std;

int main() {
    // Variablen deklarieren
    double Sollstunden, Iststunden, Stundenlohn, Bruttolohn, Ueberstunden;

    // Eingaben einlesen
    cout << "Geben Sie die Monats-Sollstunden ein: ";
    cin >> Sollstunden;

    cout << "Geben Sie die Monats-Iststunden ein: ";
    cin >> Iststunden;

    cout << "Geben Sie den Stundenlohn ein: ";
    cin >> Stundenlohn;

    // Berechnen
    Ueberstunden = Iststunden - Sollstunden;

    if (Ueberstunden < (Ueberstunden*1.1)) {
        Bruttolohn = Stundenlohn * Sollstunden + (Ueberstunden * Stundenlohn * 1.25);
    } else {
        Bruttolohn = Stundenlohn * Sollstunden + (Ueberstunden * Stundenlohn * 1.30);
    }

    // Ausgabe
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Der Bruttolohn beträgt: " << Bruttolohn;
}