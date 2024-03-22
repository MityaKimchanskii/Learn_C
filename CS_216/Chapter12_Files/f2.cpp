#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

    fstream dataFile;
    double x = 1909.28245;

    dataFile.open("outfile.txt", ios::out);

    dataFile << fixed;
    dataFile << x << endl;

    dataFile << setprecision(5);
    dataFile << x << endl;

    dataFile << setprecision(4);
    dataFile << x << endl;

    dataFile << setprecision(3);
    dataFile << x << endl;

    dataFile << setprecision(2);
    dataFile << x << endl;

    dataFile << setprecision(1);
    dataFile << x << endl;

    dataFile << setprecision(0);
    dataFile << x << endl;

    dataFile.close();

    return 0;
}