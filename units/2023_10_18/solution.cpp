#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cout << "Bitte einen Wert eingeben: ";
    cin >> x;

    cout << "Bitte noch einen Wert eingeben: ";
    cin >> y;

    cout << "Bitte noch einen Wert eingeben: ";
    cin >> z;

    cout << "Die Summe der drei Zahlen beträgt " << x + y + z << "!" << endl;

    int a;
    cout << "Bitte einen Wert eingeben: ";

    cin >> a;

    cout << "Das Produkt der Summe und der eingegebenen Zahl betraegt " << (x + y + z) * a << "!" << endl;

}