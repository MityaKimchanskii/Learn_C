#include <iostream>
#include <string>
#include <cstring>


using namespace std;


int main() {
    const int SIZE = 32;
    char name[SIZE] = "Lion";
    char lastname[] = "King";
    cout << name << " " << lastname << endl;

    const int SIZE_2 = 90;
    char line[SIZE_2];
    int count = 0;

    int length;

    cout << "Enter the sentence of no more than " << SIZE_2 - 1 << " characters: " << endl;
    cin.getline(line, SIZE_2);

    while (line[count] != '\0') {
        cout << line[count];
        count++;
    }
    cout << endl;

    // function strlen(string) determines the length of the string
    length = strlen(line);
    cout << "The length of the string: " << length << endl;

    // function strcat(string, string) concatenates the two strings
    char concat1[] = "Hello ";
    char concat2[] = "World!";
    strcat(concat1, concat2);
    cout << "The concatenated string: " << concat1 << endl;

    // function strncat(string, string, int) concatenates the two strings and specifies the length
    strncat(concat1, concat2, 20);

    // function strcopy(string, "String") copies the string into the new string
    char country[20];
    strcpy(country, "United States");
    cout << "Function strcopy(string) copies the string into the new string: " << country << endl;

    // function strncpy(string, string, int) copies the string into the new string and specifies the length
    strncpy(country, "Canada", 15);

    return 0;
}