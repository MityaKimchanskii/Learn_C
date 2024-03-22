#include <iostream>
#include <fstream>

using namespace std;

int main() {

    const int SIZE = 10;
    fstream file;
    int numbers[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // open and write file output in binary mode
    file.open("f14.dat", ios::out | ios::binary);
    cout << "Writing the contents of the array to the file." << endl;
    file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));
    file.close();

    // open and read file output in binary mode
    file.open("f14.dat", ios::in | ios::binary);
    cout << "Reading the contents of the array from the file." << endl;
    file.read(reinterpret_cast<char*>(numbers), sizeof(numbers));

    // display the contents of the array
    for (int count = 0; count < SIZE; count++) {
        cout << numbers[count] << " ";
    }
    cout << endl;
    file.close();

    return 0;
}