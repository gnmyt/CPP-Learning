#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class TikTakToe {

public:
    string rows[9] = {
            "-", "-", "-",
            "-", "-", "-",
            "-", "-", "-"};

public:
    bool playerWon(string character) {
        for (int i = 0; i < 9; i += 3) {
            if (rows[i] == character && rows[i + 1] == character && rows[i + 2] == character) return true;
        }

        for (int i = 0; i < 3; i++) {
            if (rows[i] == character && rows[i + 3] == character && rows[i + 6] == character) return true;
        }

        if (rows[0] == character && rows[4] == character && rows[8] == character) return true;
        if (rows[2] == character && rows[4] == character && rows[6] == character) return true;

        return false;
    }

public:
    void generateMove() {
        int random = rand() % 10;

        if (rows[random] != "-") {
            generateMove();
            return;
        }

        rows[random] = "O";
    }


public:
    void printBoard() {
        cout << "=====";

        for (int i = 0; i < 9; i++) {
            if (i % 3 == 0) {
                cout << "\n";

            }

            cout << rows[i] + " ";
        }
        cout << "\n=====\nWo soll dein X hin? [1-9] ";
    }

public:
    void awaitInput() {
        printBoard();

        int input;
        cin >> input;

        if (rows[input - 1] != "-") {
            cout << "Dieses Feld ist bereits belegt.\n";
            return;
        }

        rows[input - 1] = "X";
        generateMove();
    }
};

int main() {
    TikTakToe board;

    while (!(board.playerWon("X") || board.playerWon("O"))) {
        board.awaitInput();
    }

    cout << "\n===== ENDSTAND =====";

    board.printBoard();

    if (board.playerWon("X")) {
        cout << "\n\nDu hast gewonnen! Herzlichen Glückwunsch. :)";
    } else {
        cout << "Du hast legit gegen einen random Bot verloren, würd mir mal Gedanken machen..";
    }


    return 0;

}