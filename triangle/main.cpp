#include <iostream>

using namespace std;

// Enumeration type for triangle shapes
enum triangleType {
    scalene,
    isosceles,
    equilateral,
    noTriangle
};

// Function to determine the shape of the triangle
triangleType triangleShape(double side1, double side2, double side3) {
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side2 == side3) {
            return equilateral;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            return isosceles;
        } else {
            return scalene;
        }
    } else {
        return noTriangle;
    }
}

int main() {
    // Input side lengths from the user
    double side1, side2, side3;
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Determine and output the shape of the triangle
    triangleType shape = triangleShape(side1, side2, side3);

    switch (shape) {
        case scalene:
            cout << "The triangle is scalene.\n";
            break;
        case isosceles:
            cout << "The triangle is isosceles.\n";
            break;
        case equilateral:
            cout << "The triangle is equilateral.\n";
            break;
        case noTriangle:
            cout << "These side lengths do not form a triangle.\n";
            break;
    }

    return 0;
}
