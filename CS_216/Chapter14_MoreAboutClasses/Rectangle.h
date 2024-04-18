#ifndef REC_H
#define REC_H

class Rectangle {
    private:
        int length;
        int width;
        int area;
    
    public:
        void setHeightAndWidth(int l, int w) {
            length = l; 
            width = w;
        };

        int calculateArea() {
            return area = length * width;
        };

};

#endif