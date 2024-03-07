#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int NUM_PEOPLE = 11;
    const int LENGTH = 50;
    char namesAndPhones[NUM_PEOPLE][LENGTH] = {
        "Alejandra Cruz, 555–1223",
        "Joe Looney, 555–0097",
        "Geri Palmer, 555–8787",
        "Li Chen, 555–1212",
        "Holly Gaddis, 555–8878",
        "Sam Wiggins, 555–0998",
        "Bob Kain, 555–8712",
        "Tim Haynes, 555–7676",
        "Warren Gaddis, 555–9037",
        "Jean James, 555–4939",
        "Ron Palmer, 555–2783",
    };

    char findPhone[LENGTH];
    char *strPtr = nullptr;
    int index;

    cout << "Would you like to find phone in your contacts list?" << endl;
    cout << "Please enter a name: ";
    cin.getline(findPhone, LENGTH);

    for (index = 0; index < LENGTH; index++) {
        strPtr = strstr(namesAndPhones[index], findPhone);
        if (strPtr != nullptr) {
            cout << namesAndPhones[index] << endl;
        }
    }

    return 0;
}