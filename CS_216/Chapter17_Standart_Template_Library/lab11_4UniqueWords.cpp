#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <sstream>
#include <cctype>

using namespace std;

int main() {
    string filename = "/Users/mityakim/Desktop/Learn_C/CS_216/Chapter17_Standart_Template_Library/lab11_2.txt";

    ifstream inputFile(filename);
    
    if (!inputFile) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    set<string> uniqueWords;
    string line;
    
    while (getline(inputFile, line)) {
        istringstream iss(line);
        string word;

        while (iss >> word) {
            string cleanedWord;
            for (char c : word) {
                if (isalpha(c)) {
                    cleanedWord += tolower(c);
                }
            }
            if (!cleanedWord.empty()) {
                uniqueWords.insert(cleanedWord);
            }
        }
    }

    inputFile.close();

    cout << "Unique words in the file:" << endl;
    for (const string& word : uniqueWords) {
        cout << word << endl;
    }

    return 0;
}