#ifndef CARGO_H
#define CARGO_H
#include <string>
#include "Ship.h"

using namespace std;


class Cargo: public Ship {
    private:
        int capacity;
    
    public: 
        Cargo() {
            capacity = 0;
        }

        Cargo(string n, string y, int num) {
            setName(n);
            setYear(y);
            capacity = num;
        }

        void setCapacity(int n) {
            capacity = n;
        }

        int getCapacity() const { 
            return capacity; 
        }

        using Ship::displayShip;
        virtual void displayShip(const Cargo &c) {
            cout << "The maximum carryng capacity of the " << c.getName() << " ship is  " << c.getCapacity() << " tonn." << endl;
        }
};

#endif