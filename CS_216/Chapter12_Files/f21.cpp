#include <iostream>
#include <fstream>

using namespace std;

const int DESC_SIZE = 50;

struct  InventoryItem {
    char desc[DESC_SIZE];
    int qty;
    double price; 
};

int main() {
    InventoryItem record;

    fstream inventory("inventory.dat", ios::in | ios::binary);

    if (inventory.is_open()) {
        cout << "The inventory file is open" << endl;
    } else {
        cout << "Error: The inventory file is not found." << endl;
    }

    inventory.read(reinterpret_cast<char*>(&record), sizeof(record));

    while (!inventory.eof()) {
        cout << "Description: " << record.desc << endl;
        cout << "Quantity: " << record.qty << endl;
        cout << "Price: " << record.price << endl << endl;

        inventory.read(reinterpret_cast<char*>(&record), sizeof(record));
    }

    inventory.close();
    
    return 0;
}
