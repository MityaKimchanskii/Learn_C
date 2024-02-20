#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size);
void swap(int &a, int &b);

int main() {
    const int SIZE = 6;

    int values[SIZE] = {6, 1, 3, 5, 8, 7};

    cout << "The unsorted array values: " << endl;
    for (auto value : values) {
        cout << value << " ";
    }
    cout << endl;

    bubbleSort(values, SIZE);

    cout << "The sorted array values: " << endl;
    for (auto value : values) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}

void bubbleSort(int arr[], int size) {
    int maxElement;
    int index;

    for (maxElement = size - 1; maxElement > 0; maxElement--) {
        for (index = 0; index < maxElement; index++) {
            if (arr[index] > arr[index + 1]) {
                swap(arr[index], arr[index + 1]);
            }
        }
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}