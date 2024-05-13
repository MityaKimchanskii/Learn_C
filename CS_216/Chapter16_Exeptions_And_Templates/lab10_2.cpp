#include<iostream>
#include "SortableVector.h"

using namespace std;

int main() {
    const int SIZE = 10;

    SortableVector<int> intVector(SIZE);
    SortableVector<double> doubleVector(SIZE);

    int intArr[SIZE] = { 56, 1, 45, 2, 23, 87, 14, 0, 5, 3 };
    double doubleArr[SIZE] = { 15.3, 23.1, 29.4, 22.25, 90.90, 11.14, 20.4, 80.4, 28.6, 21.7};

    for (int i = 0 ; i < SIZE; i++){
        intVector[i] = intArr[i];
        doubleVector[i] = doubleArr[i];
    }

    cout << "Integer array: " << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << intVector[i] << " ";
    }
    cout << endl;

    cout << "Double array: " << endl;
    for(int i=0; i < SIZE; i++) {
        cout << doubleVector[i] << " ";
    }   
    cout << endl;

    cout<<"After Sorting intVector is : "<<endl;
    intVector.sortArray();
    for (int i = 0; i < SIZE; i++) {
        cout << intVector[i] << " ";
    }

    cout << endl;

    cout<<"After sorting doubleVector is: "<<endl;
    doubleVector.sortArray();

    for(int i = 0; i < SIZE; i++){
        cout << doubleVector[i] << " ";
    }
    cout << endl;
    cout << "End of the programm" << endl;

    return 0;
}

