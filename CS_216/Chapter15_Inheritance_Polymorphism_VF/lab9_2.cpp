#include <iostream>
#include "Cruise.h"
#include "Cargo.h"

using namespace std;


int main() {
    Cargo cargo = Cargo("Barge", "2020", 200000);
    Cruise cruise = Cruise("Admiral", "2022", 5000);

    cargo.displayShip(cargo);
    cruise.displayShip(cruise);

    return 0;
}