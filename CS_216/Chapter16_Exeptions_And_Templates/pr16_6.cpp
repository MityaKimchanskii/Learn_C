#include <iostream>
#include <new>

using namespace std;

int main() {
    double *ptr = nullptr;

    try {
        ptr = new double [900];
    } catch(bad_alloc) {
        cout << "Insuffincient memory allocation." << endl;
    }

    return 0;
}