#include <iostream>

using namespace std;

int number(int current) {
    cout << "+ - * oder :?";

    string input;
    cin >> input;

    cout << "Was möchtest du berechnen?";
    int num2;

    cin >> num2;

    if(input == "+") {
        return current + num2;
    } else if(input == "-") {
        return current - num2;
    } else if(input == "*") {
        return current * num2;
    } else if(input == ":") {
        return current / num2;
    }

}

int main() {
    cout << "Was ist die Startzahl?";

    int start;
    cin >> start;

    bool finished = false;

    while (!finished) {
        start = number(start);

        cout << "Möchtest du weiter machen?";
        string input;
        cin >> input;

        if (input == "nein" || input == "Nein") {
            finished = true;
        }
    }

    cout << "Dein Ergebnis: " << start;

    return 0;
}