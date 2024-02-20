// Chapter 7, Programming Challenge 1: Largest/Smallest Array Values
#include <iostream>
using namespace std;

int main()
{
	// Constant for the array size
	const int SIZE = 10;
   
	int values[SIZE];	// Array of ten integers
	int count;			// Loop counter
	int largest;		// To hold the largest value
	int smallest;		// To hold the smallest value

	cout << "\nThis program will ask you to ";
	cout << "\nenter ten values, then it will";
	cout << "\ndetermine the largest and smallest";
	cout << "\nof the values you entered." << endl;

	// Prompt the user for 10 integer values.
	for (count = 0; count < SIZE; count++)
	{
		//write your code here
		cout << "Enter the integer number #";
      	cout << (count + 1) << ": ";
      	cin >> values[count];

	}
   
	// Find the largest and smallest values.
	largest = smallest = values[0];
	for (count = 1; count < SIZE; count++)
	{
		if (largest < values[count]) {
			largest = values[count];
		} else if (smallest > values[count]) {
			smallest = values[count];
		}
	}

	// Display the results.
	cout << "\nThe largest value entered is ";
	cout << largest << endl;
	cout << "The smallest value entered is ";
	cout << smallest << endl << endl;

	return 0;
}