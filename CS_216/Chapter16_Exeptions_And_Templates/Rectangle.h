#ifndef RECT_H
#define RECT_H

class Rectangle {
    private: 
        double width;
        double height;
    
    public: 
        class NegativeSize {};

        class NegativeWidth {
            private: 
                double value;
            
            public: 
                NegativeWidth(double val) {
                    value = val;
                } 

                double getValue() {
                    return value;
                }
        };

        class NegativeHeight {
            private: 
                double value;
            
            public: 
                NegativeHeight(double val) {
                    value = val;
                } 

                double getValue() const {
                    return value;
                }
        };

        Rectangle() {
            width = 0.0; 
            height = 0.0;
        }

        void setWidth(double w) {
            if (w >= 0) 
                width = w;
            else 
                throw NegativeWidth(w);
        }

        void setHeight(double h) {
            if (h >= 0)
                height = h;
            else 
                throw NegativeHeight(h);
        }

        double getLength() const {
            return height;
        }

        double getWidth() const {
            return width;
        }

        double getArea() const {
            return width * height; 
        }
};

#endif