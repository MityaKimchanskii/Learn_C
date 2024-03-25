#include <iostream>

using namespace std;

class Rectangle {
    private:
        double width;
        double length;
        double area;
    
    public:
        void setWidth(double);
        void setlength(double);
        double getWidth() const;
        double getLength() const;
        double getArea(double, double);
};

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setlength(double l) {
    length = l;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea(double w, double l) {
    area = w * l;
    return area;
}

int main() {

    Rectangle box;

    double l;
    double w;

    cout << "This program calculates the area of the rectangle." << endl;
    cout << "What is the width?: " << endl;
    cin >> w;
    cout << "What is the length?: " << endl;
    cin >> l;

    box.setWidth(w);
    box.setlength(l);

    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea(w,l) << endl;

    
    return 0;
}