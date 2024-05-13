#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

string monthName(int m);

int main() {
    int year;
    int month;
    int day;
    bool tryAgain = true;
    string monthStr;

    Date today;

    cout << "Enter day: ";
    cin >> day;

    while (tryAgain) {
        try {
            today.setDay(day);
            tryAgain = false;

        } catch (Date::InvalidDay error) {
            cout << "Error - " << error.getValueOfDay() << " invalid day!" << endl;
            cout << "Please enter a valid day: ";
            cin >> day;
        }
    }
    tryAgain = true;

    cout << "Enter month: ";
    cin >> month;
    while (tryAgain) {
        try {
            today.setMonth(month);
            tryAgain = false;

        } catch (Date::InvalidMonth error) {
            cout << "Error - " << error.getValueOfMonth() << " invalid Month!" << endl;
            cout << "Please enter a valid Month: ";
            cin >> month;
        }
    }

    monthStr = monthName(month);

    cout << "Enter year: ";
    cin >> year;
    today.setYear(year);

    cout << "------------------------------------" << endl;
    cout << "Today is " << today.getMonth() << "/" << today.getDay() << "/" << today.getYear() << endl;

    cout << "------------------------------------" << endl;
    cout << "Today is " << monthStr << " " << today.getDay() << ", " << today.getYear() << endl;

    cout << "------------------------------------" << endl;
    cout << "Today is " << today.getDay() << " " << monthStr << " " << today.getYear() << endl;

    cout << "------------------------------------" << endl;
    cout << "End of the program." << endl;

    return 0;
}

string monthName(int m) {
    if (m == 1) 
        return "January";
    else if (m == 2) 
        return "February";
    else if (m == 3) 
        return "March";
    else if (m == 4) 
        return "April";
    else if (m == 5) 
        return "May";
    else if (m == 6) 
        return "June";
    else if (m == 7) 
        return "July";
    else if (m == 8) 
        return "August";
    else if (m == 9) 
        return "September";
    else if (m == 10) 
        return "October";
    else if (m == 11) 
        return "November";
    else if (m == 12) 
        return "December";
}