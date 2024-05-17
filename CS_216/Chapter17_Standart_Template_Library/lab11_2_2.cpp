#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <algorithm>
#include <cctype>

// Function to remove punctuation and convert to lowercase
std::string cleanWord(const std::string& word) {
    std::string cleaned = word;
    cleaned.erase(std::remove_if(cleaned.begin(), cleaned.end(), ::ispunct), cleaned.end());
    std::transform(cleaned.begin(), cleaned.end(), cleaned.begin(), ::tolower);
    return cleaned;
}

int main() {
    std::ifstream inputFile("/Users/mityakim/Desktop/Learn_C/CS_216/Chapter17_Standart_Template_Library/lab11_2.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    std::map<std::string, int> wordFrequency;

    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            word = cleanWord(word);
            if (!word.empty()) {
                wordFrequency[word]++;
            }
        }
    }

    inputFile.close();

    // Display the frequency of each word
    for (const auto& pair : wordFrequency) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}