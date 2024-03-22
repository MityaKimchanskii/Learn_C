#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    char ch;

    fstream datafile("f11.txt", ios::out);

    cout << "Type a sentence and be sure to end it with a period." << endl;

    cin.get(ch);
    while (ch != '.') {
        datafile.put(ch);
        cin.get(ch);
    }
    datafile.put(ch);

    datafile.close();
    

    return 0;
}