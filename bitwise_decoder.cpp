#include <iostream>
#include <vector>

using namespace std;

class ItemManager {
private:
    std::vector<int> availableItems;

public:
    ItemManager() {
        availableItems = {1 << 0, 1 << 1, 1 << 2, 1 << 3, 1 << 4, 1 << 5, 1 << 6, 1 << 7, 1 << 8, 1 << 9};
    }

    bool isActivated(int index, int activatedItems) {
        return index >= 0 && index < availableItems.size() &&
               (activatedItems & availableItems[index]) == availableItems[index];
    }

    std::vector<int> getInventory(int activatedItems) {
        std::vector<int> activated;
        for (size_t i = 0; i < availableItems.size(); ++i)
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