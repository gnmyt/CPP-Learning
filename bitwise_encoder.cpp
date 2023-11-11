#include <iostream>

using namespace std;

int main() {
    int inventory = 0;

    string input;
    do {
        cout << "Drücke Enter, um das Programm zu beenden." << endl;
        cout << "Gib ein Item ein, um es zu aktivieren oder zu deaktivieren (IDS 1-10): ";
        getline(cin, input);

        if (input.empty()) break;

        int item = stoi(input);

        if (item < 1 || item > 10) {
            cout << "Ungültiges Item. Bitte versuche es erneut." << endl;
            continue;
        }

        if ((inventory & (1 << (item - 1))) != 0) {
            inventory &= ~(1 << (item - 1));
            cout << "Item #" << item << " wurde deaktiviert." << endl;
        } else {
            inventory |= 1 << (item - 1);
            cout << "Item #" << item << " wurde aktiviert." << endl;
        }
    } while (!input.empty());

    cout << "Dein Inventar als Bitset: " << inventory << endl;

    return 0;
}