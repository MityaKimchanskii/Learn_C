#include <iostream>
#include <fstream>

using namespace std;


int main() {
    int arr[26]={0};
    int ranges[8]={0,0,0,0,0,0,0,0};
    int score;
    int i;

    ifstream inFile;
    inFile.open("/Users/mityakim/Desktop/Learn_C/studentScore/Ch8_Ex4Data.txt");

    if (!inFile.is_open()) {
        cout << "Unable to open the file!" << endl;
    }

    for ( i=0; i<26; i++) {
        inFile >> score;
        arr[i] = score;
    }
    
    inFile.close();

	for(int i=0;i<26;i++)
	{
		if(arr[i]>=0&&arr[i]<=24)
			ranges[0]++;
		else if(arr[i]>=25&&arr[i]<=49)
			ranges[1]++;
		else if(arr[i]>=50&&arr[i]<=74)
			ranges[2]++;
		else if(arr[i]>=75&&arr[i]<=99)
			ranges[3]++;	
		else if(arr[i]>=100&&arr[i]<=124)
			ranges[4]++;
		else if(arr[i]>=125&&arr[i]<=149)
			ranges[5]++;
		else if(arr[i]>=150&&arr[i]<=174)
			ranges[6]++;
		else if(arr[i]>=175&&arr[i]<=200)
			ranges[7]++;
	}
	
	cout << "\n0 - 24: "<<ranges[0];
	cout << "\n25 - 49: "<<ranges[1];
	cout << "\n50 - 74: "<<ranges[2];
	cout << "\n75 - 99: "<<ranges[3];
	cout << "\n100 - 124: "<<ranges[4];
	cout << "\n125 - 149: "<<ranges[5];
	cout << "\n150 - 174: "<<ranges[6];
	cout << "\n175 - 200: "<<ranges[7];
    cout << endl;

    return 0;
}