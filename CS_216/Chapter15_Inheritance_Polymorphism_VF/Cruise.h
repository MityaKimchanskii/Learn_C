#ifndef CRUISE_H
#define CRUISE_H
#include <string>
#include "Ship.h"

using namespace std;


class Cruise: public Ship {
    private:
        int numOfPassengers;
    
    public: 
        Cruise() {
            numOfPassengers = 0;
        }

        Cruise(string n, string y, int num) {
            setName(n);
            setYear(y);
            numOfPassengers = num;
        }

        void setNumOfPassengers(int n) {
            numOfPassengers = n;
        }

        int getNumOfPassengers() const { 
            return numOfPassengers; 
        }

        using Ship::displayShip;
        virtual void displayShip(const Cruise &c) {
            cout << "The ship " << c.getName() << " has a maximum number of passengers " << c.getNumOfPassengers() << "." << endl;
        }
};

#endif