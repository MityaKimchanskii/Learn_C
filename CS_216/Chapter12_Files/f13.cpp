#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const int SIZE = 5;
    char data[SIZE] = { 'a', 'b', 'c', 'd', 'e'};
    fstream file;

    // Open file and write to it
    file.open("f13.dat", ios::out | ios::binary);
    cout << "Writing the characters to the file..." << endl;
    file.write(data, sizeof(data));
    file.close();

    // Open the same file and read the characters
    file.open("f13.dat", ios::out | ios::binary);
    cout << "Now reading the characters from the file..." << endl;
    file.read(data, sizeof(data));

    // Display the characters
    for (int count = 0; count < SIZE; count++) {
        cout << data[count] << " ";
    }

    file.close();

    return 0;
}