#include <iostream>
#include <string>

using namespace std;

double divide(int numerator, int denominator);

int main() {
    int num1, num2;
    double quotient;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    
    try {
        quotient = divide(num1, num2);
        cout << "The quotient is: " << quotient << endl;
    } catch(string exceptionString) {
        cout << exceptionString;
    }

    cout << "End of the program." << endl;

    return 0;
}

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        string exceptionString = "Error: Cannot divide by zero!\n";
        throw exceptionString;
    }

    return static_cast<double>(numerator)/denominator;
}