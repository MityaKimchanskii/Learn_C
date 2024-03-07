#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main() {
    string inputSentence;
    string outputSentence;
    int index;

    cout << "Please enter a sentence without spaces and less than 100 characters." << endl;
    getline(cin, inputSentence);

    int len = inputSentence.length();

    for (index = 0; index < len; index++) {
        if (isupper(inputSentence[index]) && index != 0) {
            char letter = tolower(inputSentence[index]);
            outputSentence.push_back(' ');
            outputSentence.push_back(letter);
        } else { 
            outputSentence.push_back(inputSentence[index]);
        }
    }

    cout << "The sentence you entered: " << outputSentence << endl;

    return 0;
}