#ifndef CASHREGISTER_H
#define CASHREGISTER_H
#include "InventoryItem.h"

#include <string>

using namespace std;

class CashRegister {
    public:
        string item;
        int quantity;
        double sellPrice;
        double salesTax;
        double totalPrice;

        double getProfitPrice(int quantity, InventoryItem inventory) {
            sellPrice = (inventory.getCost() * 0.3 + inventory.getCost()) * quantity;

            return sellPrice;
        };

        double getSalesTax() {
            salesTax = sellPrice * 0.06;
            
            return salesTax;
        };

        double getTotalPrice() {
            totalPrice = sellPrice + salesTax;

            return totalPrice;
        };
};

#endif