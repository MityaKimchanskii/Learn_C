// Write a function that accepts an integer argument and returns 
// the sum of all the integers from 1 up to the number passed as an 
// argument. For example, if 50 is passed as an argument, the function 
// will return the sum of 1, 2, 3, 4, … 50. Use recursion to calculate 
// the sum. Demonstrate the function in a program.

#include<iostream>

using namespace std;

int sum(int n);

int main() {
    int num;

    cout << "Please enter a number: ";
    cin >> num;
    cout << "The sum of " << num << " using recursion is " << sum(num) << endl;

return 0;
}

int sum(int n) {
    if (n == 1) {
        return 1;
    }
        
    return n + sum(n - 1);
}