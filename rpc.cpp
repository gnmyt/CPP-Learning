#include <iostream>

using namespace std;

int getIdByText(string text) {
    return text == "Schere" ? 1 : text == "Stein" ? 2 : text == "Papier" ? 3 : 0;
}

string getTextById(int id) {
    return id == 1 ? "Schere" : id == 2 ? "Stein" : id == 3 ? "Papier" : "Nichts";
}

int main() {
    srand((unsigned) time(NULL));

    int random = rand() % 3 + 1;

    cout << "Was möchtest du spielen? [Schere/Stein/Papier]: ";

    string choice;
    cin >> choice;

    int num = getIdByText(choice);

    if (num == 0) return main();

    if (random == num) {
        cout << "Unentschieden, ich habe mich auch für " << choice << " entschieden";
    } else if ((random == 1 && num == 3) || (random == 2 && num == 1) || (random == 3 && num == 2)) {
        cout << "Ich habe gewonnen!. Ich hatte mich für " << getTextById(random) << " entschieden.";
    } else {
        cout << "Glückwunsch! " << choice << " hat mich geschlagen. Ich hatte " << getTextById(random);
    }

    cout << "\nNochmal? [Ja/Nein] ";

    string again;
    cin >> again;

    if (again == "Ja" || again == "ja") return main();

    return 0;
}