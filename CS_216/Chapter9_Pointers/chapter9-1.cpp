#include <iostream>

using namespace std;

int main() {
    int x = 23;

    cout << "The address of x is " << &x << endl;
    cout << "The size of x is " << sizeof(x) << endl;
    cout << "The value of x is " << x << endl;

    return 0;
}

