#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    int Körner = 2400000;
    int Entnahme = 1;
    int Tage = 0;


    // Eingabe
    cout << "Geben Sie die Anzahl der Körner ein: ";
    cin >> Körner;

    // Berechnung
    while (Körner > 0) {
        Körner -= Entnahme;
        Entnahme *= 2;
        Tage++;
        cout << "Tag " << Tage << " Entnahme " << Entnahme << " Rest " << (Körner > 0 ? Körner : 0) << endl;
    }

    // Ausgabe
    cout << "Nach " << Tage << " Tagen kann er Ottilie heiraten!" << endl;

    return 0;
}