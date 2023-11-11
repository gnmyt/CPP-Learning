#include <iostream>

using namespace std;

int main() {

    int base10 = 25;

    cout << "Gib deine Base10 Zahl ein: ";
    cin >> base10;
    int base10val = base10;

    string binary;
    while (base10 != 0) {
        binary = (base10 % 2 == 0 ? "0" : "1") + binary;
        base10 /= 2;
    }

    cout << base10val << " in binär ist " << binary;

    return (36 & 8);
}