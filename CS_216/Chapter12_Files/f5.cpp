#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool openFileIn(fstream & file, string);
void showConntents(fstream &);

int main() {
    fstream f5datafile;

    if (openFileIn(f5datafile, "demofile.txt")) {
        cout << "File opened successfully" << endl;
        cout << "Now reading data from the file" << endl;
        showConntents(f5datafile);
        f5datafile.close();
    } else {
        cout << "File open error!" << endl;
    }


    return 0;
}

bool openFileIn(fstream & file, string name) {
    file.open(name, ios::in);
    if (file.fail())
        return false;
    else
        return true;
}

void showConntents(fstream &file) {
    string line;

    while ( file >> line)
    {
        cout << line << endl;
    }
    
}