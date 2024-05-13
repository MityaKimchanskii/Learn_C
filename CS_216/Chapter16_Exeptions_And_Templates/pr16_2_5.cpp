#include <iostream>
#include <string>
#include "Rectangle.h"

using namespace std;

int main() {
    double width;
    double height;
    bool tryAgain = true;

    Rectangle myRectangle;

    cout << "Enter the rectangle's width: ";
    cin >> width;

    while (tryAgain) {
        try {
            myRectangle.setWidth(width);
            tryAgain = false;
            
        } catch (Rectangle::NegativeWidth err) {
            cout << err.getValue() << " - is a negative value for width was enterd!" << endl;
            cout << "Please enter a positive value for width: ";
            cin >> width;
        } 
    }

    tryAgain = true;

    cout << "Enter the rectangle's height: ";
    cin >> height;

    while (tryAgain) {
        try {
            myRectangle.setHeight(height);
            tryAgain = false;
        } catch (Rectangle::NegativeHeight err) {
            cout << err.getValue() << " - is a negative value for height was enterd!" << endl;
            cout << "Please enter a positive value for height: ";
            cin >> height;
        }
    }

    cout << "The rectangle's area is " << myRectangle.getArea() << "." << endl;

    cout << "End of the program." << endl;

    return 0;
}