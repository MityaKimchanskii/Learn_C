#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "Employee.h"


class ProductionWorker: public Employee {
    private:
        int shift;
        double hourlyPayRate;

    public:
        ProductionWorker() {
            shift = 1;
            hourlyPayRate = 0;
        } 

        ProductionWorker(int s, double hpr, string n, int num, string d) {
            shift = s;
            hourlyPayRate = hpr;
            setName(n);
            setNumber(num);
            setDate(d);
        }

        void setShift(int s) { 
            shift = s; 
        }

        void setHPR(double hpr) {
            hourlyPayRate = hpr;
        }

        string getShift() { 
            if (shift == 1) {
                return "Day";
            } else if (shift == 2) {
                return "Night";
            }
        }

        double getHourlyPayRate() const {
            return hourlyPayRate;
        }
};

#endif