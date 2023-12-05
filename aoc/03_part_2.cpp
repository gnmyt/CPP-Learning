#include <iostream>
#include <fstream>
#include <vector>
#include <map>

// Advent of Code 2023, Day 3 Part 2

using namespace std;

int main() {
    ifstream input("input.txt");

    vector<string> lines;

    for (string line; getline(input, line);) {
        lines.push_back("." + line + ".");
    }

    map<string, vector<int>> gears;

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

                    bool isInCurrent = (numSize > currentLine.size() ? '.' : currentLine[numSize]) == '*';
                    bool isInBelow = currentBelow == '*';
                    bool isInNext = currentNext == '*';

                    if (isInCurrent || isInBelow || isInNext) {
                        int line =  isInBelow ? i - 1 : isInNext ? i + 1 : i;
                        string gearId = to_string(line) + "-" + to_string(numSize);
                        gears[gearId].push_back(stoi(numberString));
                        cout << " - adding as " << to_string(line) + "-" + to_string(numSize);
                        break;
                    }
                }

                cout << "\n";

                numberString = "";
                buildMode = false;
            }
        }
    }

    for (const auto &item: gears) {
        int temp = 1;
        cout << "SEQUENCE " << item.first << endl;
        if (item.second.size() != 2) continue;
        for (const auto &gear: item.second) {
            temp *= gear;
            cout << " + " << gear;
        }
        cout << "\n";
        sum += temp;
    }

    cout << "Sum: " << sum;
}