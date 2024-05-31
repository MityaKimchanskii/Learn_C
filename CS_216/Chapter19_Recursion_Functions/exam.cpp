#include<iostream>
using namespace std;

class invalidHour {
    string s;
    public:
    invalidHour() {
        s = "Hour input is wrong!!";
    }

    void disp() {
        cout<<s;
        exit(0);
    }
};

class invalidMin {
    string s;
    public:
        invalidMin() {
            s = "Minutes input is wrong!!";
        }

        void disp() {
            cout<<s;
            exit(0);
        }
};


class invalidSec {
    string s;
    public:
        invalidSec() {
            s = "Seconds input is wrong!!";
        }

        void disp() {
            cout << s;
            exit(0);
        }
};


void read_input(int hr,int min,int sec,string medium) {
    cout << "Please enter the hour: ";
    cin >>  hr;
    try {
        if(hr > 12 || hr <= 0) { 
            throw invalidHour();
        }
    } catch(invalidHour h1) {
        h1.disp();
    }

    cout << "Please enter the minute: ";
    cin >> min;
    try{
        if(min>60 || min<0) {
            throw invalidMin();
        }
    } catch(invalidMin m1) {
        m1.disp();
    }

    cout<<"Please enter the second: ";
    cin >> sec;
    try {
        if(sec > 60 || min < 0) {
            throw invalidSec();
        }
    } catch(invalidSec s1) {
        s1.disp();
    }

    cout << "Please enter am/pm : ";
    cin >> medium;
    if (medium == "pm") {
        hr += 12;
    } else if (medium != "am") {
        exit(0);
    }

    cout << "24 hr format is : " << hr << ":" << min << ":" << sec;
}

int main() {
    int hr,min,sec;
    string medium;  

    read_input(hr, min, sec, medium);
}