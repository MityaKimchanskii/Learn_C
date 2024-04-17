#ifndef AUXIL_H
#define AUXIL_H

class Budget;

class AuxiliaryOffice {
    private:
        double auxBudget;
    
    public:
        AuxiliaryOffice() {
            auxBudget = 0.0;
        }

        double getAuxiliaryBudget() const {
            return auxBudget;
        }

        void addBudget(double, Budget &);
};


#endif