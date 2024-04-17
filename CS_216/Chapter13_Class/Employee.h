#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
    public:
        string name;
        int idNumber;
        string department;
        string position;

    public:
        Employee() {
            name = "";
            idNumber = 0;
            department = "";
            position = "";
        };

        Employee(string n, int id, string dep, string pos) {
            name = n;
            idNumber = id;
            department = dep;
            position = pos;
        };

        Employee(string n, int id) {
            name = n;
            idNumber = id;
        };

        void setName(string n) {
            name = n;
        };

        void setDepartment(string dep) {
            department = dep;
        };

        void setPosition(string pos) {
            position = pos;
        };

        void setId(int id) {
            idNumber = id;
        };


};

#endif
