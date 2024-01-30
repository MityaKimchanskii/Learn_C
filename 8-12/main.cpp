#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>

using namespace std;

//declare the gobal array
double average[5];

//function prototypes
void getData(ifstream& inf, string n[], double runData[][8], int count);
void calculateAverage(double runData[][8], int count);
void print(string n[], double runData[][8], int count);

int main() {
   string names[5];
   double runningData[5][8];
   ifstream inputfile("/Users/mityakim/Desktop/Learn_C/8-12/ch8_Ex12Data.txt");

   if(inputfile) {
        getData(inputfile, names, runningData, 5);
   } else {
        cout << "Unable to open the file." << endl;

        system("pause");

        return 0;
   }

   inputfile.close();

   calculateAverage(runningData, 5);

   print(names, runningData, 5);

   system("pause");


   return 0;
}

//read the data
void getData(ifstream& inf, string n[], double runData[][8], int count) {  
   while(!inf.eof()) {
        for(int i = 0; i < count; i++) {
            inf >> n[i];
            for(int j = 0; j < 7; j++) {
                inf >> runData[i][j];
            }
        }
   }
}

//calculate average
void calculateAverage(double runData[][8], int count) {
   double total;
   for(int i = 0; i < count; i++) {
        total=0;
        for(int j = 0; j < 7; j++) {
            total += runData[i][j];
        }        
        average[i]=total/7;      
   }
}

//print the output
void print(string n[], double runData[][8], int count) {
   cout << "Name         Day 1   Day 2   Day 3   Day 4   Day 5   Day 6   Day 7   Average" << endl;

   for(int i = 0; i < count; i++) {

        cout << left << setw(8) << n[i] << left <<  setw(5) << fixed << "";

        for(int j=0;j<7; j++) {
            cout << fixed << setprecision(2) << runData[i][j] << "   ";
        }

        cout << right << setw(5) << average[i];
        cout << endl;
   }

//    cout << setfill('=') << setw(80) << "=";
//    cout << endl;
}