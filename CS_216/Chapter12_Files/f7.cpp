#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string input;
    fstream namefile;

    namefile.open("demofile.txt");

    if(namefile) {
        while (namefile >> input) {
            cout << input;
        }

        namefile.close();
    } else {
        cout << "Error: Could not open file." << endl;
    }

    return 0;
}