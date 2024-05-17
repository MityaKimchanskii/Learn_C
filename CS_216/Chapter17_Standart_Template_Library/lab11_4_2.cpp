#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string filename = "/Users/mityakim/Desktop/Learn_C/CS_216/Chapter17_Standart_Template_Library/book-1.txt";
    
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    set<string> uniqueWords;

    string line;
    while (getline(file, line)) {
        transform(line.begin(), line.end(), line.begin(), ::tolower); 
        istringstream stream(line);
        string word;
        while (stream >> word) {
            word.erase(remove_if(word.begin(), word.end(), [](char c) { return !isalpha(c); }), word.end());
            uniqueWords.insert(word);
        }
    }

    file.close();

    cout << "Unique words found in the file:" << std::endl;
    for (const string& word : uniqueWords) {
        cout << word << std::endl;
    }

    cout << "Number of unique words: " << uniqueWords.size() << endl;

    return 0;
}