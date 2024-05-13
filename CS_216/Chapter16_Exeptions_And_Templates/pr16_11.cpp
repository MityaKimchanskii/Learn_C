#include <iostream>
#include "SimpleVector.h"

using namespace std;

int main() {
    const int SIZE = 10;
    int count;

    SimpleVector<int> intTable(SIZE);
    SimpleVector<double> doubleTable(SIZE);

// ---------------------------------------------------------------------------- //
    for (count = 0; count < SIZE; count++) {
        intTable[count] = count*2;
        doubleTable[count] = count*2.13;
    }

    cout << "These values are in integer Table: " << endl;
    for (count = 0; count < SIZE; count++) {
        cout << intTable[count] << " ";
    }
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;

    cout << "These values are in double Table: " << endl;
    for (count = 0; count < SIZE; count++) {
        cout << doubleTable[count] << " ";
    }
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;
// ---------------------------------------------------------------------------- //
    cout << "Adding 7 to each element of intTable and doubleTable" << endl;
    for (count = 0; count < SIZE; count++) {
        intTable[count] = intTable[count] + 7;
        doubleTable[count] = doubleTable[count] + 7.0;
    }
    cout << endl;

    cout << "These values are in integer Table: " << endl;
    for (count = 0; count < SIZE; count++) {
        cout << intTable[count] << " ";
    }
    cout << endl;

    cout << "These values are in double Table: " << endl;
    for (count = 0; count < SIZE; count++) {
        cout << doubleTable[count] << " ";
    }
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;
// ---------------------------------------------------------------------------- //
    cout << "Incrementing each element of intTable and doubleTable" << endl;
    for (count = 0; count < SIZE; count++) {
        intTable[count] = intTable[count]++;
        doubleTable[count] = doubleTable[count]++;
    }
    cout << endl;

    cout << "These values are in integer Table: " << endl;
    for (count = 0; count < SIZE; count++) {
        cout << intTable[count] << " ";
    }
    cout << endl;

    cout << "These values are in double Table: " << endl;
    for (count = 0; count < SIZE; count++) {
        cout << doubleTable[count] << " ";
    }
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "The end of the program.";

    return 0;
}