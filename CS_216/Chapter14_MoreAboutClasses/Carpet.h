#ifndef CARPET_H
#define CARPET_H

#include "Rectangle.h"


class Carpet {
    private:
        Rectangle room;
        int priceForSquareFeet;

    public:
        void setPrice(double p) {
            priceForSquareFeet = p;
        }

        void setRoom(Rectangle r) {
            room = r;
        }

        double calculateCost() {
            int area = room.calculateArea();
            return area * priceForSquareFeet;
        };
};


#endif