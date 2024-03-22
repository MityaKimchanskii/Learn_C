#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main() {
    string input;
    fstream file;

    file.open("/Users/mityakim/Desktop/Learn_C/CS_216/Chapter12_Files/test.txt");

    if (file) {
        while (file) {
            cout << input << endl;
            getline(file, input);
        }
        cout << endl;
    } else {
        cout << "Error reading test file" << endl;
    }

    file.close();

    return 0;
}