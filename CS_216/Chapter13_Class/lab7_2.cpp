#include "InventoryItem.h"
#include "CashRegister.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int const SIZE = 3;
    string name;
    int quantity;

    CashRegister register1;
    CashRegister register2;
    CashRegister register3;

    CashRegister registers[SIZE] = {register1, register2, register3};

    InventoryItem item1("Wrench", 10.00, 20);
    InventoryItem item2("Hammer", 15.00, 35);
    InventoryItem item3("Pliers", 8.00, 55);

    InventoryItem items[SIZE] = {item1, item2, item3};

    cout << "Please enter the product name: ";
    cin >> name;
    
    cout << "Please enter quantity: ";
    cin >> quantity;
    cout << endl;

    while (quantity < 0) {
        cout << "Please enter the correct quantity: ";
        cin >> quantity;
    }

    for (int i = 0; i < SIZE; i++) {
        string iName = items[i].getDesctiption();
        double price;
        double tax;
        double total;

        if (iName == name) {
            registers[i].item = name;
            registers[i].quantity = quantity;
            price = registers[i].getProfitPrice(quantity, items[i]);
            tax = registers[i].getSalesTax();
            total = registers[i].getTotalPrice();
            int reminder = items[i].getUnit() - quantity;
            items[i].setUnit(reminder);

            cout << fixed << setprecision(2);
            cout << "Your purchase is: " << registers[i].item << ", and quantity: " << quantity << "." << endl;
            cout << "The price without tax for " << quantity << " items is: $" << price << endl;
            cout << "The 6% tax: $" << tax << endl;
            cout << "The total: $" << total << endl;
            cout << endl;

            cout << "Remaining " << registers[i].item << " in stock: " << items[i].getUnit() << ".";
            cout << endl;
        }    
    }


    return 0;
}