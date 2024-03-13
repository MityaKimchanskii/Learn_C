#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Abstract Data Types
struct Speaker {
    string name;
    string telephone;
    string topic;
    double feeRequired;
};

// Global Variables
const int ARRAY_SIZE = 100;

Speaker speakers[ARRAY_SIZE]= { 
    {"Bill", "123123123", "Hello, World!", 50.87}, 
    {"Jackson","123123123", "Hello, World!", 50.87},  
    {"Grahm","123123123", "Hello, World!", 50.87},
    {"McCoy","123123123", "Hello, World!", 50.87},  
    {"Daryl", "123123123", "Hello, World!", 50.87},  
    {"Santiago", "123123123", "Hello, World!", 50.87},  
    {"Hanks", "123123123", "Hello, World!", 50.87},
    {"Johnson", "123123123", "Hello, World!", 50.87},  
    {"Miller", "123123123", "Hello, World!", 50.87},  
    {"Ruth", "123123123", "Hello, World!", 50.87}
};

// function prototypes
void printMenu();
void printFullData(const Speaker[], int);
void changeSpeakerData(Speaker speakers[], int);
void printSpeaker(Speaker speakers[], int index);
void addNewSpeaker(Speaker speakers[], int &n);

int main() {
    int number = 0;
    int speakerIndex;
    int n = 10;

    while (number != 4) {
        printMenu();
        cin >> number;
        cout << endl;

        if (number == 1) {
            printFullData(speakers, ARRAY_SIZE);
        } else if (number == 2) {
            cout << "Please enter the speaker number to update the data: " << endl;
            cin >> speakerIndex;
            cout << endl;
            changeSpeakerData(speakers, speakerIndex);
        } else if (number == 3) {
            cout << "Please enter the new speaker data." << endl;
            addNewSpeaker(speakers, n);

        } else { 
            break;
        }
    }

    return 0;

}

void printMenu()
{
    cout << "Select one of the following options:" << endl;
    cout << "1: To print the entire data" << endl;
    cout << "2: To update/change a speaker data" << endl;
    cout << "3: To add a new speaker" << endl;
    cout << "4: To quit the program" << endl;
}

void printFullData(const Speaker speakers[], int size) {
  
    cout << "----------------------------------------------------------------------------" << endl;
    for (int i = 0; i < size; i++) {
        if (speakers[i].name != "") {
            cout << i << ": " << speakers[i].name << " " << speakers[i].telephone << " " << speakers[i].topic << " " << speakers[i].feeRequired << " "  << endl;
        }
    }
    cout << "----------------------------------------------------------------------------" << endl;
}

void changeSpeakerData(Speaker speakers[], int index) {
    string fieldName;

    printSpeaker(speakers, index);

    cout << "Please enter what data you want to change name(n), telephone(tel), topic(top), fee(f)." << endl;
    cin >> fieldName;
    cout << endl;

    if (fieldName == "n") {
        string newData;
        cout << "Please enter name: " << endl;
        cin >> newData;
        cout << endl;

        speakers[index].name = newData;
        printSpeaker(speakers, index);

    } else if (fieldName == "tel") {
        string newData;
        cout << "Please enter telephone: " << endl;
        cin >> newData;
        cout << endl;

        speakers[index].telephone = newData;
       printSpeaker(speakers, index);

    } else if (fieldName == "top") {
        string newData;
        cout << "Please enter Speaking Topic: " << endl;
        cin >> newData;
        cout << endl;

        speakers[index].topic = newData;
        printSpeaker(speakers, index);

    } else if (fieldName == "f") {
        double newData;
        cout << "Please enter fee required: " << endl;
        cin >> newData;
        cout << endl;

        speakers[index].feeRequired = newData;
        printSpeaker(speakers, index);

    } 
}

void printSpeaker(Speaker speakers[], int index) {
    cout << "----------------------------------------------------------------------------" << endl;
    cout << speakers[index].name << " " << speakers[index].telephone << " " << speakers[index].topic << " " << speakers[index].feeRequired << endl;
    cout << "----------------------------------------------------------------------------" << endl;
}

void addNewSpeaker(Speaker speakers[], int &n) {
    Speaker newSpeaker;

    if(n < ARRAY_SIZE) {
        string name;
        cout << "Please enter name: " << endl;
        cin >> name;
        cout << endl;
        newSpeaker.name = name;
      
        int telphone;
        cout << "Please enter telephone: " << endl;
        cin >> telphone;
        cout << endl;
        newSpeaker.telephone = telphone;

        string topic;
        cout << "Please enter Speaking Topic: " << endl;
        cin >> topic;
        cout << endl;
        newSpeaker.topic = topic;
        
        double feeRequired;
        cout << "Please enter account ballance: " << endl;
        cin >> feeRequired;
        if (feeRequired < 0) {
            cout << "Please enter valid positive ballance: " << endl;
            cin >> feeRequired;
        } else { 
            cout << endl;
            newSpeaker.feeRequired = feeRequired;
        }

        speakers[n] = newSpeaker;
    }
    n = n + 1;
}

