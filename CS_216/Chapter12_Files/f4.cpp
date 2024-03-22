#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int nums[ROWS][COLS] = { 23, 56, 3, 33, 66, 67, 85, 56, 99 };

    fstream outfile("f4.txt", ios::out);

    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            outfile << setw(8) << nums[row][col];
        }
        outfile << endl;
    }

    outfile.close();
    cout << "Done!" << endl;


    return 0;
}