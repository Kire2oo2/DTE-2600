#include <iostream>

using namespace std;
// Constants
const int ITEMS_PER_STACK = 64;
const int STACKS_PER_SHULKER_BOX = 27;

// Function to calculate stacks and shulker boxes needed
void calculateStorage(int items, int &stacks, int &remainingItems, double &shulkerBoxes) {
    // Calculate the number of stacks
    stacks = items / ITEMS_PER_STACK;

    // Calculate the remaining items after filling the stacks
    remainingItems = items % ITEMS_PER_STACK;

    // Calculate the number of shulker boxes as a floating-point value
    shulkerBoxes = static_cast<double>(stacks) / STACKS_PER_SHULKER_BOX;
}

int main() {
    // Input: Amount of items
    int items;
    cout << "Enter the amount of items: ";
    cin >> items;

    // Variables to store the calculated result
    int stacks, remainingItems;
    double shulkerBoxes;

    // Calculate the number of stacks, remaining items, and shulker boxes
    calculateStorage(items, stacks, remainingItems, shulkerBoxes);

    // Output the result
    cout << stacks << " Stacks and " << remainingItems << " Items" << endl;
    cout << "Number of shulker boxes needed: " << shulkerBoxes << endl;

    return 0;
}
