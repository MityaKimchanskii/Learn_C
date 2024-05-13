#include <iostream>

using namespace std;

template <typename T>
void swapVars(T &var1, T &var2) {
    T temp;

    temp = var1;
    var1 = var2;
    var2 = temp;
}

int main() {
    char firstChar, secondChar;
    int firstInt, secondInt;
    double firstDouble, secondDouble;

    cout << "Enter two characters: ";
    cin >> firstChar >> secondChar;
    swapVars(firstChar, secondChar);
    cout << "First letter: " << firstChar << " , second letter: " << secondChar << endl;

    cout << "Enter two integers: ";
    cin >> firstInt >> secondInt;
    swapVars(firstInt, secondInt);
    cout << "First integer: " << firstInt << " , second integer: " << secondInt << endl;

    cout << "Enter two doubles: ";
    cin >> firstDouble >> secondDouble;
    swapVars(firstDouble, secondDouble);
    cout << "First double: " << firstDouble << " , second double: " << secondDouble << endl;

    return 0;
}