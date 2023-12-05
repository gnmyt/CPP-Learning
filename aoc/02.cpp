#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

// Advent of Code, Day 2

struct Set {
    int red = 0;
    int green = 0;
    int blue = 0;
};

int main() {

    fstream input("input.txt");

    map<int, vector<Set>> games;

    for (string line; getline(input, line);) {
        regex e{"Game ([0-9]+): (.*)"};
        smatch m;

        if (regex_search(line, m, e) && m.size() <= 1) continue;
        string id = m.str(1);
        string setString = m.str(2);

        vector<string> sets;

        bool space = false;
        string current_str;
        for (char current: setString) {
            if (current == ' ' && space) {
                space = false;
                sets.push_back(current_str);
                current_str = "";
                continue;
            }

            if (current == ';') {
                space = true;
                continue;
            }

            current_str.push_back(current);
        }
        sets.push_back(current_str);

        vector<Set> list = {};

        for (auto current: sets) {
            regex set("([0-9]+) (blue|red|green)");

            sregex_iterator iter(current.begin(), current.end(), set);
            sregex_iterator end;

            map<string, int> colors = {};

            while (iter != end) {
                colors[iter->str(2)] = stoi(iter->str(1));
                iter++;
            }

            Set currentSet{};
            currentSet.blue = colors["blue"];
            currentSet.red = colors["red"];
            currentSet.green = colors["green"];

            list.push_back(currentSet);
        }

        games[stoi(id)] = list;
    }


    int sum = 0;

    for (
        auto game: games) {
        int id = game.first;
        vector<Set> bag = game.second;

        bool possible = true;
        for (auto set: bag) {
            cout << "b: " << set.blue << ",r: " << set.red << ",g: " << set.green << "; - ";
            if (set.red > 12)
                possible = false;
            if (set.green > 13)
                possible = false;
            if (set.blue > 14)
                possible = false;
        }

        cout << "game " << id << " is " << possible <<endl;
        if (possible) sum +=id;
    }

    cout << "sum => " << sum;

    return 0;
}