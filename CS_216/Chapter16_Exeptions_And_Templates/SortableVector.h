#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <algorithm>
#include "SimpleVector.h"


template <typename T>
class SortableVector: public SimpleVector<T> {
    public: 
        SortableVector(int t) : SimpleVector<T>(t) {}
        SortableVector(SimpleVector<T> &obj) : SimpleVector<T>(obj) {}

        void sortArray();
};

template <typename T>
void SortableVector<T>::sortArray() {
    bool swaping;
    do {
        swaping = false;
        for (int i = 0; i < (this->size() - 1); i++) {
            if (SimpleVector<T>::operator[](i) > SimpleVector<T>::operator[](i+1)) {
                swap(SimpleVector<T>::operator[](i), SimpleVector<T>::operator[](i+1));
                swaping = true;
            }
        }
    } while (swaping);
}

#endif