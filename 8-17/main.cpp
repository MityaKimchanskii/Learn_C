#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

const int NUM_EMPLOYEES = 10;

struct Employee {
    string name;
    double hoursWorked;
    double payRate;
    double salary;
};

// Function prototypes
void readData(vector<Employee>& employees);
void calculateWeeklyPay(vector<Employee>& employees);
double calculateAverageSalary(const vector<Employee>& employees);
void printEmployeeData(const vector<Employee>& employees, double averageSalary);

int main() {
    vector<Employee> employees;

    // Read data from the file
    readData(employees);

    // Calculate weekly pay
    calculateWeeklyPay(employees);

    // Calculate average salary
    double averageSalary = calculateAverageSalary(employees);

    // Print employee data
    printEmployeeData(employees, averageSalary);

    return 0;
}

void readData(vector<Employee>& employees) {
    ifstream dataFile("/Users/mityakim/Desktop/Learn_C/8-17/ch8_Ex17Data.txt");
    if (!dataFile) {
        cerr << "Error: Could not open file.\n";
        exit(1);
    }

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        Employee employee;
        dataFile >> employee.name >> employee.hoursWorked >> employee.payRate;
        employees.push_back(employee);
    }

    dataFile.close();
}

void calculateWeeklyPay(vector<Employee>& employees) {
    for (Employee& employee : employees) {
        double regularHours = min(40.0, employee.hoursWorked);
        double overtimeHours = max(0.0, employee.hoursWorked - 40.0);
        double payRate = employee.payRate;

        if (overtimeHours > 0.0) {
            double overtimePay = overtimeHours * 1.5 * payRate;
            employee.salary = (regularHours * payRate) + overtimePay;
        } else {
            employee.salary = (regularHours * payRate);
        }
    }
}

double calculateAverageSalary(const vector<Employee>& employees) {
    double total = 0;
    for (const Employee& employee : employees) {
        total += employee.salary;
    }
    return total / employees.size();
}

void printEmployeeData(const vector<Employee>& employees, double averageSalary) {
    cout << "Name     Hrs Worked  Pay Rate  Salary" << endl;
    for (const Employee& employee : employees) {
        cout << left << setw(7) << employee.name << "  " << left << setw(10) <<  fixed << setprecision(2) << employee.hoursWorked << "  " << setw(8) << employee.payRate << "  " << employee.salary << endl;
    }

    cout << "Average Salary: $" << fixed << setprecision(2) << averageSalary << endl;

    // cout << "\nSalary Greater than Avg: \n";
    for (const Employee& employee : employees) {
        if (employee.salary >= averageSalary) {
            cout << employee.name << " ";
        }
    }
    cout << endl;
}