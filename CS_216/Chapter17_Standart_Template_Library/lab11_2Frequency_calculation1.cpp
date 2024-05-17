#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {
    string filename = "/Users/mityakim/Desktop/Learn_C/CS_216/Chapter17_Standart_Template_Library/book-1.txt";
    string input;

    ifstream file;
    map<string, int> words;
    file.open(filename);

    while (file >> input) {
        if (words.count(input)) {
            words[input]++;
        } else {
            words.emplace(make_pair(input, 1));
        }
    }

    file.close();

    cout << "Word Frequency: ";
    for (auto element : words) {
        cout << element.first << ": " << element.second << endl;
    }

    return 0;
}