#include <iostream>
#include <fstream>

using namespace std;


int main() {

    fstream dataFile;

    cout << "Opening file... " << endl;

    dataFile.open("demofile.txt", ios::out);  // open for output writing data 
    cout << "Now writing data to the file..." << endl;

    dataFile << "Hello, world!" << endl;
    dataFile << "Jones" << endl;
    dataFile << "Willis" << endl;
    dataFile << "Bob" << endl;

    cout << "Now closing file..." << endl;
    dataFile.close();

    cout << "Opening file again..." << endl;
    dataFile.open("demofile.txt", ios::out | ios::app);

    cout << "Writing more data to the end of the file..." << endl;
    dataFile << "Hello, Software engineer!" << endl;
    dataFile << "Bones" << endl;
    dataFile << "Santa" << endl;

    cout << "Closing file..." << endl;
    dataFile.close();


    return 0;
}