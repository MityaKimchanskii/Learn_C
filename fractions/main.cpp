#include <iostream>

using namespace std;

int addFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * den2 + num2 * den1;
    resultDen = den1 * den2;
}

int subtractFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * den2 - num2 * den1;
    resultDen = den1 * den2;
}

int multiplyFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * num2;
    resultDen = den1 * den2;
}

int divideFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * den2;
    resultDen = den1 * num2;
}

enum ArithmeticOperation { add = 1, subtract = 2, multiply = 3, divide = 4 };

ArithmeticOperation defineOperator(int num) {
    if (num == 1) {
        return add;
    } else if (num == 2) {
        return subtract;
    } else if (num == 3) {
        return multiply;
    } else if (num == 4) {
        return divide;
    }
}

int main() {
    int firstNumerator, secondNumerator, firstDenominator, secondDenominator, resultNumerator, resultDenominator, number;
    
    cout << "Choose the number for arithmetic operation: \n 1 - Addition\n 2 - Subtraction\n 3 - Multiply\n 4 - Divide" << endl;
    cin >> number;
    cout << endl;

  
        ArithmeticOperation operation = defineOperator(number);
    
        switch (operation) {
        case add:
            cout << "Enter the numerator for the fraction 1: ";
            cin >> firstNumerator;
            cout << endl;
            cout << "Enter the denominator for the fraction 1: ";
            cin >> firstDenominator;
            cout << endl;
            cout << "Enter the numerator for the fraction 2: ";
            cin >> secondNumerator;
            cout << endl;
            cout << "Enter the denominator for the fraction 2: ";
            cin >> secondDenominator;
            cout << endl;

            addFractions(firstNumerator, firstDenominator, secondNumerator, secondDenominator, resultNumerator, resultDenominator);
            cout << firstNumerator << " / " << firstDenominator << " + " << secondNumerator << " / " << secondDenominator << " = " << resultNumerator << " / " << resultDenominator << endl;

        break;
        case subtract:
            cout << "Enter the numerator for the fraction 1: ";
            cin >> firstNumerator;
            cout << endl;
            cout << "Enter the denominator for the fraction 1: ";
            cin >> firstDenominator;
            cout << endl;
            cout << "Enter the numerator for the fraction 2: ";
            cin >> secondNumerator;
            cout << endl;
            cout << "Enter the denominator for the fraction 2: ";
            cin >> secondDenominator;
            cout << endl;

            subtractFractions(firstNumerator, firstDenominator, secondNumerator, secondDenominator, resultNumerator, resultDenominator);
            cout << firstNumerator << " / " << firstDenominator << " + " << secondNumerator << " / " << secondDenominator << " = " << resultNumerator << " / " << resultDenominator << endl;

        break;
        case multiply:

            cout << "Enter the numerator for the fraction 1: ";
            cin >> firstNumerator;
            cout << endl;
            cout << "Enter the denominator for the fraction 1: ";
            cin >> firstDenominator;
            cout << endl;
            cout << "Enter the numerator for the fraction 2: ";
            cin >> secondNumerator;
            cout << endl;
            cout << "Enter the denominator for the fraction 2: ";
            cin >> secondDenominator;
            cout << endl;

            multiplyFractions(firstNumerator, firstDenominator, secondNumerator, secondDenominator, resultNumerator, resultDenominator);
            cout << firstNumerator << " / " << firstDenominator << " + " << secondNumerator << " / " << secondDenominator << " = " << resultNumerator << " / " << resultDenominator << endl;

        break;
        case divide:
            cout << "Enter the numerator for the fraction 1: ";
            cin >> firstNumerator;
            cout << endl;
            cout << "Enter the denominator for the fraction 1: ";
            cin >> firstDenominator;
            cout << endl;
            cout << "Enter the numerator for the fraction 2: ";
            cin >> secondNumerator;
            cout << endl;
            cout << "Enter the denominator for the fraction 2: ";
            cin >> secondDenominator;
            cout << endl;

            divideFractions(firstNumerator, firstDenominator, secondNumerator, secondDenominator, resultNumerator, resultDenominator);
            cout << firstNumerator << " / " << firstDenominator << " + " << secondNumerator << " / " << secondDenominator << " = " << resultNumerator << " / " << resultDenominator << endl;

        break;
        default:
            cout << "Invalid choice. Please enter a number between 0 and 4." << endl;
        }


    
    return 0;
}
