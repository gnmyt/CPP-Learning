#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class TikTakToe {

public: bool botGame = true;

public:
    string rows[9] = {"-", "-", "-","-", "-", "-","-", "-", "-"};

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
    }

public:
    void awaitInput(string player) {
        printBoard();

        cout << "\n=====\nWo soll dein " << player << " hin? [1-9] ";

        int input;
        cin >> input;

        if (rows[input - 1] != "-") {
            cout << "Dieses Feld ist bereits belegt.\n";
            return;
        }

        rows[input - 1] = player;

        if (botGame) generateMove();
    }
};

int main() {
    TikTakToe board;

    cout << "Möchtest du gegen einen Bot [1] oder einen lokalen Gegner [2] spielen?: ";
    string in;
    cin >> in;

    if (in == "2") board.botGame = false;

    while (!(board.playerWon("X") || board.playerWon("O"))) {
        board.awaitInput("X");
        if (!board.botGame && !board.playerWon("X")) board.awaitInput("O");
    }

    cout << "\n===== ENDSTAND ";

    board.printBoard();

    cout << "\n===== ENDSTAND =====\n\n";

    if (board.playerWon("X") && board.botGame) {
        cout << "Du hast gewonnen! Herzlichen Glückwunsch. :)";
    } else if (board.botGame) {
        cout << "Du hast legit gegen einen random Bot verloren, würd mir mal Gedanken machen..";
    } else {
        cout << (board.playerWon("X") ? "X" : "O") << " hat gewonnen. Glückwunsch!";
    }

    cout << "\n\n";


    return 0;

}