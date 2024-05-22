#include <iostream>
#include "RainfallList.h"

using namespace std;

int main() {
    RainfallList rainfallList;
    cout << "--------------------------------------------" << endl;
    cout << "|         Append rainfall node:            |" << endl;
    cout << "--------------------------------------------" << endl;
    rainfallList.appendNode("Jan", 1235);
    rainfallList.appendNode("Feb", 100);
    rainfallList.displayNodeList();
    cout << "--------------------------------------------" << endl;
    rainfallList.maxRainfall();
    rainfallList.minRainfall();
    rainfallList.yearlyRainfall();

    cout << "--------------------------------------------" << endl;
    cout << "|         Insert rainfall node:            |" << endl;
    cout << "--------------------------------------------" << endl;
    rainfallList.insertNode("Mar", 3677);
    rainfallList.insertNode("Apr", 700);
    rainfallList.insertNode("May", 1500);
    rainfallList.displayNodeList();
    cout << "--------------------------------------------" << endl;
    rainfallList.maxRainfall();
    rainfallList.minRainfall();
    rainfallList.yearlyRainfall();

    cout << "--------------------------------------------" << endl;
    cout << "|         Delete rainfall node:            |" << endl;
    cout << "--------------------------------------------" << endl;
    rainfallList.deleteNode("May");
    rainfallList.deleteNode("Apr");
    rainfallList.displayNodeList();
    cout << "--------------------------------------------" << endl;
    rainfallList.maxRainfall();
    rainfallList.minRainfall();
    rainfallList.yearlyRainfall();

    return 0;
}