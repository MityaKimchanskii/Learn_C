#ifndef SHIP_H
#define SHIP_H
#include <iostream>
#include <string>

using namespace std;

class Ship {
    private: 
        string name;
        string year;
    
    public:
        Ship() {
            name = "";
            year = "";
        } 

        Ship(string n, string y) {
            name = n;
            year = y;
        }

        void setName(string n) {
            name = n;
        }

        void setYear(string y) {
            year = y;
        }

        string getName() const {
            return name;
        }

        string getYear() const {
            return year;
        }

        virtual void displayShip(const Ship &s) {
            cout << "The ship " << s.getName() << " was built in " << s.getYear() << "." << endl;
        }
};


#endif