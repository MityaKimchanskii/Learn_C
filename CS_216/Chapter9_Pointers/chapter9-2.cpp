#include <iostream>

using namespace std;


int main() {

    int x = 23;
    int* ptr = nullptr;

    ptr = &x;

    cout << "The value in x is " << x << endl;
    cout << "The address in x is " << ptr << endl;

    return 0;
}