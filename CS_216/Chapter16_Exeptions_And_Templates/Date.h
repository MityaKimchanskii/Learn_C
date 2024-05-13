#ifndef DATE_H
#define DATE_H


class Date {
    private:
        int month;
        int day;
        int year;

    public:
        // Exeption classes
        class InvalidDay {
            private: 
                int value;
            
            public: 
                InvalidDay(int val) {
                    value = val;
                } 

                int getValueOfDay() {
                    return value;
                }
        };

        class InvalidMonth {
            private: 
                int value;
            
            public: 
                InvalidMonth(int val) {
                    value = val;
                } 

                int getValueOfMonth() {
                    return value;
                }
        };

        // Constructors
        Date(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }

        Date() {
            day = 1;
            month = 1;
            year = 2000;
        }

        // Functions to set date, month and year
        void setDay(int d) {
            if (d < 1 || d > 31) {
                throw InvalidDay(d);
            } else {
                day = d;
            }
        }

        void setMonth(int m) {
            if (m < 1 || m > 12) {
                throw InvalidMonth(m);
            } else {
                month = m;
            }
        }

        void setYear(int y) {
            year = y;
        }

        int getDay() const {
            return day;
        }

        int getMonth() const {
            return month;
        }

        int getYear() const {
            return year;
        }

};

#endif