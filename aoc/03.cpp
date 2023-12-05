#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Advent of Code 2023, Day 3

bool isSymbol(char input) {
    return !(isdigit(input) || input == '.');
}

int main() {
    ifstream input("input.txt");

    vector<string> lines;

    for (string line; getline(input, line);) {
        lines.push_back("." + line + ".");
    }

    int sum = 0;

    for (int i = 0; i < lines.size(); i++) {
        string beforeLine = i > 0 ? lines[i - 1] : "";
        string currentLine = lines[i];
        string nextLine = i > lines.size() ? "" : lines[i + 1];

        bool buildMode = false;
        string numberString;

        for (int charIndex = 0; charIndex < currentLine.size(); charIndex++) {
            char current = currentLine[charIndex];

            if (isdigit(current)) {
                buildMode = true;
                numberString.push_back(current);
                continue;
            }

            if (buildMode) {
                cout << "checking " << numberString;
                int start = charIndex - numberString.size() - 1;

                for (int numSize = start > 0 ? start : 0; numSize <= charIndex; numSize++) {
                    char currentBelow = i > 0 ? beforeLine[numSize] : '.';
                    char currentNext = i > lines.size() - 2 && numSize > nextLine.size() ? '.' : nextLine[numSize];

                    if (isSymbol(numSize > currentLine.size() ? '.' : currentLine[numSize]) || isSymbol(currentBelow) || isSymbol(currentNext)) {
                        sum += stoi(numberString);
                        cout << " - adding... ";
                        break;
                    }
                }

                cout << "\n";

                numberString = "";
                buildMode = false;
            }
        }
    }

    cout << "Sum: " << sum;
}