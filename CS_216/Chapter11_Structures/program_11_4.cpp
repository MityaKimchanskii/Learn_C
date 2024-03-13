#include <iostream>
#include <iomanip>

using namespace std;


struct PayInfo {
    int hours;
    double payRate;
};


int main() {
    const int NUM = 3;
    PayInfo workers[NUM];
    int index;
    double gross;


    for (index = 0; index < NUM; index++) {
        cout << "Hours worked by employee #";
        cout << (index + 1) << ": ";
        cin >> workers[index].hours;
        cout << endl;

        cout << "Hourly pay rate for employee #";
        cout << (index + 1) << ": ";
        cin >> workers[index].payRate;
        cout << endl;
    }

    cout << "The gross pay rate for employees:\n";
    cout << fixed << setprecision(2) << endl;
    
    for (index = 0; index < NUM; index++) {
        gross = workers[index].payRate * workers[index].hours;
        cout << "Employee #" << index + 1 << ": $" << gross << endl;
    }

    return 0;
}