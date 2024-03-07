#include <iostream>

using namespace std;

int main() {
    short numbers[] = {888, 10, 22, 31, 55, 5, 77};

    cout << "The first element of the array is " << numbers[0] << endl;
    cout << "The first element of the array using pointer *numbers is: " << *numbers << endl;
    cout << "The address of the first element of the array is: " << numbers << endl;

    return 0;
}