// Write a function that accepts an array of integers and a number 
// indicating the number of elements as arguments. The function should 
// recursively calculate the sum of all the numbers in the array. 
// Demonstrate the function in a driver program.

#include <iostream>
    
using namespace std;
    
int sum(int[], const int);
    
int main () {
    const int SIZE = 5;
    int  intArr[SIZE] = {-1, 2, 6, 3, 5};

    for (int i = 0; i < SIZE; i++) {
        cout << "Item [" << i + 1 <<"] : " << intArr[i] << endl;
    }

    cout << "--------------------------------------------" << endl;
    cout << "         The sum should be : 15" << endl;
    cout << "--------------------------------------------\n";
    cout << "The sum using the function : " << sum(intArr, SIZE) << endl;
    cout << "--------------------------------------------" << endl;
    
    return 0;
}

int sum(int arr[], const int SIZE){
    if (SIZE > 0) {
        return (sum(arr, SIZE - 1) + arr[SIZE - 1]);
    } else {
        return 0;
    }
}