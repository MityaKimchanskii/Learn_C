#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(const char *str, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (str[start] != str[end]) {
        return false;
    }

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    cout << "Please enter a string: ";
    string input;
    getline(cin, input);

    const char *charArray = input.c_str();

    if (isPalindrome(charArray, 0, input.length() - 1)) {
        cout << input << " is a palindrome" << endl;
    } else {
        cout << input << " is not a palindrome" << endl;
    }

    return 0;
}