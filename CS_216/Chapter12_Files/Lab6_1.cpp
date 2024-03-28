#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void searchFileAndString(string filename);

int main() {
    string filename;
    
    cout << "Please enter the file name: " << endl;
    cin >> filename;

    searchFileAndString(filename);

    return 0;
}

void searchFileAndString(string filename) {
    string line;
    string search;
    int count = 0;

    fstream inData(filename, ios::in);

    if (inData.is_open()) {
        cout << "The file is opened successfully." << endl;
        cout << "Please enter the string to search: " << endl;
        cin >> search;
        cout << endl;

    } else { 
        cout << "Error: the file is not found." << endl;
    }

    cout << "Looking for the string..." << endl;
    
    // unsigned int curLine = 0;
    while (getline(inData, line)) {
        // curLine++;
        
        if (line.find(search, 0) != string::npos) {
            count += 1;
            // cout << "Found: " << search << ": in line: " << curLine << endl;
            cout << line << endl;
        } 
    }

    cout << "Search string found: " << count << " times." << endl;

    inData.close();
}