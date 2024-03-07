// This program uses subscript notation with a pointer variable and
// pointer notation with an array name.
#include <iostream>

using namespace std;

int main() {
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.07, 2.25, 1.25, 0.75, 0.5};
    double* doublePtr;
    int count;

    // Assign the address of the coins array to doublePtr.
    doublePtr = coins;

    cout << "Here are the values of the coins array. Use subscript notation with a pointer variable" << endl;
    for (count = 0; count < NUM_COINS; count++) {
        cout << doublePtr[count] << " ";
    }
    cout << endl;

    cout << "Here are the values of the coins array. Use pointer notation with the array name" << endl;
    for (count = 0; count < NUM_COINS; count++) {
        cout << *(coins + count) << " ";
    }
    cout << endl;


    return 0;
}