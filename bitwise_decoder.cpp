#include <iostream>
#include <vector>

using namespace std;

#define MAX_INVENTORY_SIZE 10

class ItemManager {
public:
    bool isActivated(int index, int activatedItems) {
        return index >= 0 && index < MAX_INVENTORY_SIZE && (activatedItems & (1 << index)) == (1 << index);
    }

    std::vector<int> getInventory(int activatedItems) {
        std::vector<int> activated;
        for (size_t i = 0; i < MAX_INVENTORY_SIZE; i++)
            if (isActivated(i, activatedItems)) activated.push_back(i + 1);

        return activated;
    }
};

int main() {
    ItemManager itemManager;
    int inventory;

    cout << "Gib dein Inventar-Bitset ein: ";
    cin >> inventory;

    std::vector<int> items = itemManager.getInventory(inventory);

    cout << "========== INVENTAR ==========" << endl;
    for (int item: items) cout << "Item #" << item << " " << endl;
    cout << "==============================" << endl;

    return 0;
}