
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream infile("/Users/mityakim/Desktop/Learn_C/historyStudents/Ch8_Ex6Data.txt");

    if (!infile){
        cout << "unable to open file so exiting from program :";
        return 0;
    }

    char answers[25];
    string str;
    getline(infile, str);

    for (int i = 0; i < 20; i++)
        answers[i] = str[i];

    while (!infile.eof()) {
        getline(infile, str);
        int i;

        for (i = 0; i < 20; i++) {
            if (str[i] == ' ')
                break;
            else
                cout << str[i];
        }

        cout << " ";
        int k = 0;
        double score = 0;

        for (int j = i + 1; j < str.length(); j++, k++) {
            cout << str[j];

            if (str[j] == ' ')
                continue;
            else if (str[j] == answers[k])
                score = score + 2;
            else if (str[j] != answers[k])
                score = score - 1;
        }

        cout << " ";
        cout << fixed << setprecision(0);
        double avg = 100.0 * score / 40.0;
        cout << score << " ";

        if (avg >= 90 && avg <= 100)
            cout << "A" << endl;
        else if (avg >= 80 && avg <= 89.99)
            cout << "B" << endl;
        else if (avg >= 70 && avg <= 79.99)
            cout << "C" << endl;
        else if (avg >= 60 && avg <= 69.99)
            cout << "D" << endl;
        else if (avg >= -15 && avg <= 59.99)
            cout << "F" << endl;
    }

    return 0;
}