#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <string>

using namespace std;

class InventoryItem {
    private:
        string desctiption;
        double cost;
        int units;

    public:
        InventoryItem() {
            desctiption = "";
            cost = 0.0;
            units = 0;
        }

        InventoryItem(string desc) {
            desctiption = desc;
        }

        InventoryItem(string desc, double c, int u) {
            desctiption = desc;
            cost = c;
            units = u;
        }

        void setDesctiption(string desc) {
            desctiption = desc;
        }

        void setCost(double c) {
            cost = c;
        }

        void setUnit(int u) {
            units = u;
        }

        string getDesctiption() const {
            return desctiption;
        }

        double getCost() const {
            return cost;
        }

        int getUnit() const {
            return units;
        }
};


#endif