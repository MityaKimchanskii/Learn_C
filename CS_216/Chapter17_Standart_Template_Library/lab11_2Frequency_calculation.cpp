#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <cctype>

using namespace std;

// Function to remove punctuation and convert to lowercase
string preprocessWord(const string& word) {
string result;
    for (char c : word) {
        if (isalpha(c)) {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    string filename = "/Users/mityakim/Desktop/Learn_C/CS_216/Chapter17_Standart_Template_Library/book-1.txt";

    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Unable to open file " << filename << endl;
        return 1;
    }

    map<string, int> wordFrequency;

    string line;
    while (getline(inputFile, line)) {
        istringstream iss(line);
        string word;

        while (iss >> word) {
            word = preprocessWord(word);
            if (!word.empty()) {
                wordFrequency[word]++;
            }
        }
    }

    inputFile.close();

    // Display the word frequencies
    cout << "Word frequencies:\n";
    for (const auto & pair : wordFrequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}