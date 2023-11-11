#include <iostream>

using namespace std;

int main() {
    int bits[3] = {1, 1, 1};

    int length = sizeof(bits) / sizeof(bits[0]);

    int num = 0;

    int modifier = 1;
    for (int i = 0; i < length; i++) {
        num += modifier * bits[length - i - 1];
        modifier *= 2;
    }

    cout << num;

    return 0;
}