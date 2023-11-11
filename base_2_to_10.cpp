#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << "Bitte gib deinen Base2 String ein: ";
    string input;
    cin >> input;

    vector<int> bits;

    for (char c : input) {
        int bit = c - '0';
        bits.push_back(bit);

        if (!(bit == 0 || bit == 1)) {
            cout << "Du kannst in Base2 nur 1 oder 0 verwenden. Bitte versuche es erneut." << endl;
            return main();
        }
    }


    int num = 0;

    int modifier = 1;
    for (auto i = bits.begin(); i < bits.end(); i++) {
        num += modifier * bits[bits.end()- i - 1];
        modifier *= 2;
    }

    cout << input << " lautet als Dezimalzahl " << num;


    return 0;
}