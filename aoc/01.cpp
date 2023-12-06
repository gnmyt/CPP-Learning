#include <iostream>
#include <vector>
#include <fstream>
#include <map>

using namespace std;

// Advent of Code 2023, Day 1

int main() {
    ifstream input("input.txt");
    map<string, string> numbers = {
            {"1", "one"}, {"2", "two"}, {"3", "three"},
            {"4", "four"}, {"5", "five"}, {"6", "six"},
            {"7", "seven"}, {"8", "eight"}, {"9", "nine"}
    };

    int calibrationValue = 0;

    for (string line; getline(input, line);) {
        string current_str;
        for (char current : line) {
            current_str.push_back(current);

            for (auto item : numbers) {
                size_t index = current_str.find(item.second);

                while(index != std::string::npos){
                    current_str.replace(index, item.second.length() - 1, item.first);
                    index = current_str.find(item.second);
                }
            }
        }
        line = current_str;

        vector<char> digits;
        for (char current: line) {
            if (isdigit(current)) digits.push_back(current);
        }

        string calibrationLine;
        calibrationLine.push_back(digits[0]);
        calibrationLine.push_back(digits.size() > 1 ? digits[digits.size() - 1] : digits[0]);

        cout << "Calibration Value (" << line << "): " << calibrationLine << "\n";
        calibrationValue += stoi(calibrationLine);
    }

    cout << "Calibration Value Sum: " << calibrationValue;

    return 0;
}