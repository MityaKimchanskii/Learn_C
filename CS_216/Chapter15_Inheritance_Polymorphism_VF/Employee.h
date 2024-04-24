#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {
    private:
        string name;
        int number;
        string date;

    public:
        Employee() {
            name = "";
            number = 0;
            date = "01/01/2024";
        }

        Employee(string n, int num, string d) {
            name = n;
            number = num;
            date = d;
        }
    
        void setName(string n) {
            name = n;
        }

        void setNumber(int n) {
            number = n;
        }

        void setDate(string d) {
            date = d;
        }

        string getName() const {
            return name;
        }

        int getNumber() const {
            return number;
        }

        string getDate() const {
            return date;
        }
};



#endif