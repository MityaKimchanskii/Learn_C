#include <iostream>
#include <iomanip>
#include "Division.h"

using namespace std;

const int NUM_OF_DIVISIONS = 2;

int main() {
    Division divisions[NUM_OF_DIVISIONS];
    double firstQuater, secondQuater, thirdQuater, fourthQuater;

    for (int i = 0; i < NUM_OF_DIVISIONS; ++i) {
        do {
            cout << "Please indicate division " << i+1 << " sales." << endl;
            cout << "First quater: $";
            cin >> firstQuater;
            cout << "Second quater: $";
            cin >> secondQuater;
            cout << "Third quater: $";
            cin >> thirdQuater;
            cout << "Fourth quater: $";
            cin >> fourthQuater;

            if (firstQuater < 0 || secondQuater < 0 || thirdQuater < 0 || fourthQuater < 0) {
                cout << "The sales amount cannot be negative!" << endl;
            };

        } while (firstQuater < 0 || secondQuater < 0 || thirdQuater < 0 || fourthQuater < 0);

        divisions[i].setQuatersDivisionSales(firstQuater, secondQuater, thirdQuater, fourthQuater);
        cout << endl;
    };

    cout << endl;
    cout << "|---------------------------------------------------------------------------|" << endl;
    cout << " The division sales for each quarter and total corporate sales for the year." << endl;
    cout << "|---------------------------------------------------------------------------|" << endl;

    for (int i = 0; i < NUM_OF_DIVISIONS; i++) {
        cout << fixed << setprecision(2);
        cout << "Division " << i+1 << " sales:" << endl;
        cout << "First quater: $" << divisions[i].getQuaterDivisionSale(0) << endl;
        cout << "Second quater: $" << divisions[i].getQuaterDivisionSale(1) << endl;
        cout << "Third quater: $" << divisions[i].getQuaterDivisionSale(2) << endl;
        cout << "Fourth quater: $" << divisions[i].getQuaterDivisionSale(3) << endl;
        cout << endl;
    }

    cout << "|-----------------------------------|" << endl;
    cout << " Total corporate sales: $" << divisions[0].getTotal() << "." << endl;
    cout << "|-----------------------------------|" << endl;

    return 0;
}