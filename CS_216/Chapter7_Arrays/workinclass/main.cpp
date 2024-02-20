#include <iostream>

using namespace std;

int abc[5];

int main() {
    int t = 0;
    string xyz = "hello";
    char a = 'c';
    int test[5];

    cout << "Global array " << abc[0] << endl;

    test[0] = 1;
    test[1] = 2;
    test[2] = 3;
    test[3] = 6;
    test[4] = 7;

    // cin >> test[3];
    // cout << test[3] << " " << endl;

    // for (int i = 0; i < 4; i++) {
    //     cout << test[i] << " " << endl;
    // }

    for (int x:test) {
        cout << x << " " << endl;
    }


    return 0;
}