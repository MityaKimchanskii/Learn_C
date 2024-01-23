#include <iostream>
#include <string>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to calculate the day number of the year
int calculateDayNumber(int month, int day, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Validate month
    if (month < 1 || month > 12)
        return -1;

    // Adjust days in February for leap year
    if (isLeapYear(year))
        daysInMonth[2] = 29;

    // Validate day
    if (day < 1 || day > daysInMonth[month])
        return -1;

    int dayNumber = day;

    for (int i = 1; i < month; ++i) {
        dayNumber += daysInMonth[i];
    }

    return dayNumber;
}

int main() {
    int month, day, year;
    char dash;

    cout << "Enter the date in the form month-day-year: ";
    cin >> month >> dash >> day >> dash >> year;
    cout << endl;

    // Check if the entered date is valid
    int dayNumber = calculateDayNumber(month, day, year);

    // Check for a leap year
    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    // Display the day number
    cout << "The day number of the year is: " << dayNumber << endl;
    
    return 0;
}

