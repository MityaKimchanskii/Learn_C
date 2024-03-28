#include <iostream>
#include <string>
#include <iomanip>

#include "Employee.h"

using namespace std;

int main() {
    
    int const SIZE = 3;
    Employee employees[SIZE];

    Employee employee1;
    employee1.setName("Mark Jones");
    employee1.setId(39119);
    employee1.setDepartment("IT");
    employee1.setPosition("Programmer");

    Employee employee2("Susan Meyers", 47899, "Accounting", "Vice President");

    Employee employee3("Joy Rogers", 81774);
    employee3.setDepartment("Manufacturing");
    employee3.setPosition("Engineer");

    employees[0] = employee1;
    employees[1] = employee2;
    employees[2] = employee3;

    for (int i = 0; i < SIZE; i++) {
        cout << setw(12) << left << employees[i].name 
             << setw(10) << left << employees[i].idNumber 
             << setw(15) << left << employees[i].department 
             << setw(20) << left << employees[i].position << endl;
    }

    return 0;
}