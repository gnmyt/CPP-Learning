#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    int Kinder, Gutschein = 0;
    char Ort, Geschlecht;

    // Eingaben abfragen
    cout << "Geben Sie Ihren Ort ein (A=Aschaffenburg, F=Frankfurt, S=sonstiger Ort): ";
    cin >> Ort;

    cout << "Geben Sie die Anzahl Ihrer Kinder ein: ";
    cin >> Kinder;

    cout << "Geben Sie Ihr Geschlecht ein (w = weiblich, m = maennlich):";
    cin >> Geschlecht;

    // Eingaben prüfen
    if (!(Ort == 'A' || Ort == 'F' || Ort == 'S')) {
        cout << "Bitte geben Sie einen korrekten Ort ein.";
        return 0;
    }

    if (Kinder < 0) {
        cout << "Du kannst keine negativen Kinder haben?";
        return 0;
    }

    if (!(Geschlecht == 'w' || Geschlecht == 'm')) {
        cout << "Sorry, in dem Beispiel gibt es nur männlich und weiblich :(";
        return 0;
    }

    // Berechnen
    if ((Ort == 'A' || Ort == 'F') && Kinder >= 2) {
        Gutschein += 100;
        Gutschein += (Kinder - 2) * 25;
    } else {
        Gutschein += 50;
    }

    if (Geschlecht == 'w') {
        Gutschein += 20;
    }

    // Ausgabe
    cout << "Sie erhalten einen Gutschein im Wert von " << Gutschein << " Euro.";
}