#include <iostream>
#include <string>

using namespace std;

bool isVowel(char letter) {
    bool isVowel = false;
    char vowelArray[] = {'a', 'e', 'o', 'i', 'u', 'y'};
    
    for (int i = 0; i < (end(vowelArray) - begin(vowelArray)); i++) {
         if (letter == vowelArray[i]) {
            isVowel = true;
         }
    }
    
    return isVowel;
}

string substr(string word) {
    string resultWord;

    for (char ch : word) {
        if (!isVowel(ch)) {
            resultWord += ch;
        }
    }

    return resultWord;
}


int main() {
    string input;
    string output;

    cout << "Enter a string: ";
    getline(cin, input);

    output = substr(input);
    cout << output << endl;

    return 0;
}