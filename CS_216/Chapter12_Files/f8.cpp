#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string input;
    fstream namefile;

    namefile.open("demofile.txt", ios::in);

    if (namefile) {
        getline(namefile, input);

        while (namefile) {
            cout << input << endl;

            getline(namefile, input);
        }
        namefile.close();
        
    } else {
        cout << "Error: Could not open file " << endl;
    }

    return 0;
}