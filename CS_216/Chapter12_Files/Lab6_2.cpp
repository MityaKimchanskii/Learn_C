#include <iostream>
#include <fstream>

using namespace std;

void arrayToFile(string filename, char *pArray, int size);
void fileToArray(string filename, char *pArray, int size);

int main() {
    const int LENGTH = 13;
    char charArray[LENGTH] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!'};

    string filename;

    cout << "Please enter the file name: " << endl;
    cin >> filename;

    arrayToFile(filename, charArray, LENGTH);

    fileToArray(filename, charArray, LENGTH);
    
    return 0;
}

void arrayToFile(string filename, char *pArray, int size) {
    fstream inFile(filename, ios::out | ios::binary);

    if (inFile.is_open()) {
        cout << "File successfully opened in binary mode for writing data." << endl;
    }

    cout << "Writing data to a file..." << endl;
    inFile.write(pArray, sizeof(size));

    inFile.close();
}

void fileToArray(string filename, char *pArray, int size) {
    fstream inFile(filename, ios::in | ios::binary);

    cout << "Reading data from file..." << endl;
    inFile.read(pArray, sizeof(size));

    for (int count = 0; count < size; ++count) {
        cout << pArray[count] << " ";
    }
    cout << endl;

    inFile.close();
}