#ifndef VECTOR_H
#define VECTOR_H
#include <new>
#include <iostream>
#include <cstdlib>

using namespace std;


template<typename T>
class SimpleVector {
    private:
        T *aptr;            // Pointer to allocated array
        int arraySize;      // Number of elements
        void memError();    // Memory allocation error
        void subError();    // Out of range error

    public:
        // Default constructor
        SimpleVector() {
            aptr = 0;
            arraySize = 0;
        }

        // Constructor declaration
        SimpleVector(int);

        // Copy constructor declaration
        SimpleVector(const SimpleVector &);

        // Destructor declaration
        ~SimpleVector();

        // Accessor to return array size
        int size() const { return arraySize; }

        // Accessor to return a specific array element
        T getElementAt(int position);

        void setElementAt(int position, T value);

        // Overloaded [] operator declaration
        T &operator[](const int &);
};


// Constructor for SimpleVector class that sets the size of the array and allocates memory for it.
template<typename T>
SimpleVector<T>::SimpleVector(int s) {
    arraySize = s;
    // Allocate memory for the array.

    try {
        aptr = new T [s];
    } catch(bad_alloc) {
        memError();
    }

    for (int count = 0; count < arraySize; count++) 
        *(aptr + count) = 0;
};

// Copy constructor for SimpleVector class.
template<typename T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj) {
    // Copy the array size.
    arraySize = obj.arraySize;

    // Allocate memory for the array.
    aptr = new T [arraySize];
    if (aptr == 0)
        memError();

    // Copy the elements of obj's array.
    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = *(obj.aptr + count);
};

// Destructor for SimpleVector class.
template <typename T>
SimpleVector<T>::~SimpleVector() {
    if (arraySize > 0)
        delete [] aptr;
};

// memError function. Displays an error message when memory allocation fails.
template <typename T>
void SimpleVector<T>::memError() {
    cout << "Error: Cannot allocate memory." << endl;
    exit(EXIT_FAILURE);
};

// subError function. Display when out of range
template <typename T>
void SimpleVector<T>::subError() {
    cout << "Error: Subscript out of range" << endl;
    exit(EXIT_FAILURE);
};

// getElementAt function returns the element at index in array
template <typename T>
void SimpleVector<T>::setElementAt(int sub, T value) {
    if (sub < 0 || sub >= arraySize)
        subError();
    
    return aptr[sub] = value;
}

template <typename T>
T SimpleVector<T>::getElementAt(int sub) {
    if (sub < 0 || sub >= arraySize)
        subError();
    
    return aptr[sub];
};

// Overloaded operator []. Returns a reference to the element 
template <typename T>
T &SimpleVector<T>::operator[](const int &sub) {
    if (sub < 0 || sub >= arraySize)
    subError();
    return aptr[sub];
}

#endif