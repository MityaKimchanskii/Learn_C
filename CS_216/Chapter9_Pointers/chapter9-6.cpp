// This program processes an array using pointer notation.
#include <iostream>

using namespace std;


int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    int count = 0;

    // Get values to store in the array.
    // Use pointer notation instead of subscripts.
    cout << "Enter " << SIZE << " numbers: ";
    for (count = 0; count < SIZE; count++) 
        cin >> *(numbers + count);

    // Display the values in the array.
    // Use pointer notation instead of subscripts.
    cout << "Here are the numbers you entered: ";
    for (count = 0; count < SIZE; count++)
        cout << *(numbers + count) << " ";
    cout << endl;


    return 0;
}