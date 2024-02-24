#include <iostream>

using namespace std;


int main() {
    int x = 299;
    int* ptr = nullptr;

    ptr = &x;

    cout << "Value: " << x << endl;
    cout << "Value of ptr[0] or x: " << ptr[0] << endl;
    cout << "Value of x or *ptr: " << *ptr << endl;

    *ptr = 100;

    cout << "Value after: " << x << endl;
    cout << "Value after of ptr[0] or x: " << ptr[0] << endl;
    cout << "Value after of x or *ptr: " << *ptr << endl;

    return 0;
}