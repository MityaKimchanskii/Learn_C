// Chapter 8, Programming Challenge 10: Sorting Orders
#include<iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void bubbleSort(int [], int);
void selectionSort(int [], int);
void showArray(int [], int);
void swap(int &a, int &b);

int main()
{
	const int SIZE = 8;
	int arr1[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };
	int arr2[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };

	bubbleSort(arr1, SIZE);

	cout << endl;

	selectionSort(arr2, SIZE);

	return 0;
}

// ********************************************************
// The bubbleSort function performs an ascending order    *
// bubble sort on the array. The size parameter is the    *
// number of elements in the array. The function has been *
// modified to print the contents of the array after each *
// pass.                                                  *
// ********************************************************
void bubbleSort(int values[], int size)
{
	// bool swap;
	int temp;
	int pass = 0;

	cout << "Now performing the bubble sort\n";
	cout << "------------------------------\n";

	//write your code here
	int maxElement;
	int index;

	for (maxElement = size - 1; maxElement > 0; maxElement--) {
		for (index = 0; index < maxElement; index++) {
			if (values[index] > values[index + 1]) {
				temp = values[index];
				values[index] = values[index + 1];
				values[index + 1] = temp;
				
				for (int i = 0; i < size; i++) {
					cout << values[i] << " "; 
				}

				pass += 1;
				cout << " - Pass: " << pass << endl;
			}
		}
	}
}

// ********************************************************
// The selectionSort function performs an ascending order *
// selection sort on the array. The size parameter is the *
// number of elements in the array. The function has been *
// modified to print the contents of the array after each *
// pass.                                                  *
// ********************************************************
void selectionSort(int values[], int size)
{
	int startScan, minIndex, minValue;
	int pass = 0;

	cout << "Now performing the selection sort\n";
	cout << "---------------------------------\n";

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = values[startScan];

        //write your code here
		for (int index = startScan + 1; index < size; index++) {
			if (values[index] < minValue) {
				minValue = values[index];
				minIndex = index;
			}
		}
		swap(values[minIndex], values[startScan]);

		for (int i = 0; i < size; i++) {
			cout << values[i] << " "; 
		}

		pass += 1;
		cout << " - Pass: " << pass << endl;
	}
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

// ********************************************************
// The showArray function displays the contents of the    *
// array. The size parameter is the number of elements.   *
// ********************************************************
void showArray(int values[], int size)
{
	for (int count = 0; count < size; count++)
		cout << values[count] << " ";

	cout << endl;
}