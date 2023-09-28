#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    int random = 1 + (rand() % 9);

    cout << "An welche Zahl denke ich? ";

    int number;
    cin >> number;

    if (number == random) {
        cout << "Congrats, die Zahl war richtig. :)";
    } else {
        cout << "Leider falsch. Die richtige Zahl war " << random;
    }

    return 0;
}