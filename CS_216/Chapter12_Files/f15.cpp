#include <iostream>
#include <fstream>

using namespace std;

const int NAME_SIZE = 50, ADDR_SIZE = 50, PHONE_SIZE = 12;

struct  Info {
    char name[NAME_SIZE];
    int age;
    char address[ADDR_SIZE];
};


int main() {
    Info person;
    char yes_or_no;

    cout << "Open file in binary mode and write the information about persons" << endl;
    fstream people("f15people.dat", ios::out | ios::binary);
    cout << endl;
    
    do {
        cout << "Enter the following information about a person: " << endl;
        cout << "Name: ";
        cin.getline(person.name, NAME_SIZE);

        cout << "Address: ";
        cin.getline(person.address, ADDR_SIZE);

        cout << "Age: ";
        cin >> person.age;
        
        people.write(reinterpret_cast<char*>(&person), sizeof(person));

        cout << "Do you want to add another person to the list?";
        cin >> yes_or_no;
        cin.ignore();

    } while (yes_or_no == 'y');

    people.close();
    cout << "Information successfully written to the file and right now file is closed." << endl;
    cout << endl;

    cout << "Open file in binary mode and display the information about persons" << endl;
    people.open("f15people.dat", ios::in | ios::binary);
    cout << endl;

    if (!people) {
        cout << "Error opening the file" << endl;
    }

    people.read(reinterpret_cast<char*>(&person), sizeof(person));

    // display the information about persons
    while (!people.eof()) {
        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
        cout << "Address: " << person.address << endl;

        cout << "Press the enter key to see the next record." << endl;
        cin.get(yes_or_no);

        people.read(reinterpret_cast<char*>(&person), sizeof(person));
    }

    cout << "Thats all data in the file." << endl;
    people.close();
    
    return 0;
}