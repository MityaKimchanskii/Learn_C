#include <iostream>
#include <iomanip>
#include "Budget.h"
// #include "Auxil.h"

using namespace std;

int main() {
    int count;
    double mainOfficeBudget;
    const int NUM_DIVISION = 5;
    Budget divisions[NUM_DIVISION];
    AuxiliaryOffice auxDiv[NUM_DIVISION];

    cout << "Enter the budget amount for Main Office: $";
    cin >> mainOfficeBudget;
    Budget::mainOffice(mainOfficeBudget);

    for (count = 0; count < NUM_DIVISION; count++) {
        double budgetAmount;
        cout << "Enter the budget amount for division " << count+1 << ": $";
        cin >> budgetAmount;
        divisions[count].addBudget(budgetAmount);
        cout << "Auxiliary office: $";
        cin >> budgetAmount;
        auxDiv[count].addBudget(budgetAmount, divisions[count]);
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "Here are the division budget requests: " << endl;

    cout << "Main office requests: $" << mainOfficeBudget << endl;
    for (count = 0; count < NUM_DIVISION; count++) {
        cout << "Division " << count+1 << ": $";
        cout << divisions[count].getDivisionBudget() << endl;
    }

    cout << "Total Budget: $" << divisions[0].getCorpBudget() << endl;

    return 0;
}