#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string filename;
    char ch;
    ifstream inFile;

    // open file 
    ofstream outFile("out.txt");

    cout << "Enter a file name: ";
    cin >> filename;

    inFile.open(filename);

    if(inFile) {
        inFile.get(ch);

        while (inFile) {
            
            outFile.put(toupper(ch));
            inFile.get(ch);
        }

        inFile.close();
        outFile.close();
        cout << "File conversion completed successfully." << endl;
        
    } else {
        cout << "Cannot open file." << endl;
    }


    return 0;
}