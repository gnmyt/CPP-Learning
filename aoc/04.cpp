#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

// Advent of Code 2023, Day 4

int main() {
    ifstream input("input.txt");

    int sums = 0;
    for (string line; getline(input, line);) {
        regex e("Card\\s*[0-9]+: (.*)");
        smatch m;

        if (!regex_search(line, m, e) && m.size() <= 1) continue;

        string set = m.str(1) + " ";

        string currentNumber;
        vector<int> winning;
        vector<int> guesses;

        bool buildMode = false;
        bool guessing = false;
        for (char current : set) {
            if (current == '|') {
                guessing = true;
                continue;
            }

            if (isdigit(current)) {
                currentNumber.push_back(current);
                buildMode = true;
                continue;
            }

            if (buildMode && current == ' ') {
                if (guessing) {
                    guesses.push_back(stoi(currentNumber));
                } else {
                    winning.push_back(stoi(currentNumber));
                }
                currentNumber = "";
                buildMode = false;
            }
        }

        int winningNums = 0;
        for (auto item : winning) {
            if (std::find(guesses.begin(), guesses.end(), item) != guesses.end()) {
                if (winningNums == 0) {
                    winningNums = 1;
                    continue;
                }
                winningNums *= 2;
            }
        }

        cout << line << " ["  << winningNums << "]" << endl;

        sums += winningNums;
    }

    cout << endl << "Sum: " << sums;
}