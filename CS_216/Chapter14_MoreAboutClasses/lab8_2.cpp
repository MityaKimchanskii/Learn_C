#include <iostream>
#include "Rectangle.h"
#include "Carpet.h"


using namespace std;

int main() {
    Carpet carpet;
    Rectangle room;
    int length;
    int width;
    int price;

    cout << "Please enter the length of the room(feet): ";
    cin >> length;
    cout << endl;

    cout << "Please enter the width of the room(feet): ";
    cin >> width;
    cout << endl;

    cout << "Please enter the price for square feet: ";
    cin >> price;

    room.setHeightAndWidth(length, width);
    room.calculateArea();

    carpet.setRoom(room);
    carpet.setPrice(price);

    cout << "!------------------------------------------|" << endl;
    cout << "The total price of the carpet $" << carpet.calculateCost() << "." << endl;
    cout << "!------------------------------------------|" << endl;

    return 0;
}