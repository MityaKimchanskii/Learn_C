// This program uses a pointer to display the contents of an array.
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 7;
    int set[SIZE] = {100, 13, 2, 37, 44, 75, 88};
    int* numPtr = nullptr;
    int count;

    numPtr = set;

    // Use the pointer to display the array contents.
    cout << "The numbers in set are: " << endl;
    for (count = 0; count < SIZE; ++count) {
        cout << *numPtr << " ";
        numPtr++;
    }
    cout << endl;

    // Display the array contents in reverse order.
    cout << "The numbers in set backward are: " << endl;
    for (count = 0; count < SIZE; ++count)  {
        numPtr--;
        cout << *numPtr << " ";
    }
    cout << endl;

    // Display the array contents using while loop.
    cout << "Display the array contents using while loop." << endl;
    cout << *numPtr << " ";
    while (numPtr < &set[SIZE -1]) {
        numPtr++;
        cout << *numPtr << " ";
    }
    cout << endl;

    // Display the array contents using while loop in reverse order.
    cout << "Display the array contents using while loop in reverse order." << endl;
    cout << *numPtr << " ";
    while (numPtr > set) {
        numPtr--;
        cout << *numPtr << " ";
    }
    cout << endl;



    return 0;
}