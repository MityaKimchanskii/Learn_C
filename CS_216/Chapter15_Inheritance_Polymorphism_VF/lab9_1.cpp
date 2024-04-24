#include <iostream>
#include <string>
#include <iomanip>
#include "ProductionWorker.h"

using namespace std;


int main() {
    ProductionWorker pw1 = ProductionWorker(1, 45.89, "Black Jack", 1234567, "04/23/2022");
    ProductionWorker pw2 = ProductionWorker(2, 70.22, "Jack Bauer", 1234568, "05/05/2000");

    cout << "Sceduler: ProductionWorker" << endl;
    cout << "Name         " << "Employee Number" << "   Hire date" << "    Shift" << "  Hourly pay rate" << endl;
    cout << pw1.getName() << setw(13) << pw1.getNumber() << setw(18) << pw1.getDate() << setw(8) 
         << pw1.getShift() << setw(10) << pw1.getHourlyPayRate() << endl;
    cout << pw2.getName() << setw(13) << pw2.getNumber() << setw(18) << pw2.getDate() << setw(8) 
         << pw2.getShift() << setw(10) << pw2.getHourlyPayRate() << endl;

    return 0;
}