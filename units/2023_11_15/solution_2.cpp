#include <iostream>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classification.hpp>

using namespace std;

int main() {
    string input;
    int summe1, summe2, gesamt;

    getline(cin, input);

    input.erase(std::remove_if(input.begin(), input.end(), ::isspace), input.end());

    cout << input.substr(0, 2)  << " - Länderkennziffer (40 = Deutschland)" << endl;
    cout << input.substr(2, 5)  << " - Kennzeichen des Herstellers" << endl;
    cout << input.substr(7, 5) << "- Produktkennziffer" << endl;
    cout << input[12] << " - Prüfziffer" << endl;

    for (int i = 0; i < 12; i += 2) {
        summe1 += (input[i] - '0');
        summe2 += (input[i + 1] - '0');
    }

    gesamt = summe1 + summe2 * 3;

    cout << "Summe1: " << summe1 << endl;
    cout << "Summe2: " << summe2 << endl;
    cout << "Gesamtsumme: " << gesamt << endl;
    cout << "Differenz zu 70 = " << (70 - gesamt);
}