#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char input;

    cout << "Enter any character: ";
    cin.get(input);
    cout << "The character you entered is: " << input << endl;

    if (isalpha(input)) 
        cout << "That is an alphabetic character" << endl;
    if (isdigit(input))
        cout << "That is a digit: " << input << endl;
    if (islower(input)) 
        cout << "That is lowercase: " << input << endl;
    if (isupper(input))
        cout << "That is uppercase: " << input << endl;
    if (isspace(input)) 
        cout << "That is a space" << endl;


    return 0;
}