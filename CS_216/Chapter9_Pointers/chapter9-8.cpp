// This program uses the address of each element in the array.
#include <iostream>

using namespace std;

int main() {
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.07, 2.25, 1.25, 0.75, 0.5};
    double* doublePtr = nullptr;
    int count;

    cout << "Here are the values in the coins array" << endl;
    for (count = 0; count < NUM_COINS; count++) {
        doublePtr = &coins[count];

        cout << "Content of the element: " << *doublePtr << " and address: " << doublePtr << endl;
    }
    cout << endl;

    return 0;
}