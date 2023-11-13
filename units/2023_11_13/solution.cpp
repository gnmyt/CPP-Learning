#include <iostream>

using namespace std;

int main() {
    // Variablendeklaration
    int Ort, Kinder, Geschlecht, Gutschein = 0;

    // Eingaben abfragen
    cout << "Geben Sie Ihren Ort ein (1=Aschaffenburg, 2=Frankfurt, 3=sonstiger Ort): ";
    cin >> Ort;

    cout << "Geben Sie die Anzahl Ihrer Kinder ein: ";
    cin >> Kinder;

    cout << "Geben Sie Ihr Geschlecht ein (1 = weiblich, 2 = maennlich):";
    cin >> Geschlecht;

    // Eingaben prüfen
    if (Ort < 1 || Ort > 3) {
        cout << "Bitte geben Sie einen korrekten Ort ein.";
        return 0;
    }

    if (Kinder < 0) {
        cout << "Du kannst keine negativen Kinder haben?";
        return 0;
    }

    if (!(Geschlecht == 1 || Geschlecht == 2)) {
        cout << "Sorry, in dem Beispiel gibt es nur männlich und weiblich :(";
        return 0;
    }

    // Berechnen
    if ((Ort == 1 || Ort == 2) && Kinder >= 2) {
        Gutschein += 100;
        Gutschein += (Kinder - 2) * 25;
    } else {
        Gutschein += 50;
    }

    if (Geschlecht == 1) {
        Gutschein += 20;
    }

    // Ausgabe
    cout << "Sie erhalten einen Gutschein im Wert von " << Gutschein << " Euro.";
}