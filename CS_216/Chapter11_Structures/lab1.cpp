#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Abstract Data Types
struct Date {
    int month;
    int day;
    int year;
};

struct Address {
    string street;
    string city;
    string state;
    int zip;
    int telephone;
};

struct Customer {
    string name;
    Address address;
    double accountBalance;
    Date dateOfLastPayment;
};

// Global Variables
const int ARRAY_SIZE = 100;

Customer customers[ARRAY_SIZE]= { 
    {"Bill", {"Main St.", "Los Angeles", "CA", 10777, 222345666}, 2034.00, {12, 20, 2023} }, 
    {"Jackson", {"Beverly St.", "Los Angeles", "CA", 20756, 332345777}, 111.00, {12, 20, 2023} },  
    {"Grahm",{ "Main St.", "New York", "CA", 90777, 222345666}, 555578.00, {12, 20, 2023} },
    {"McCoy", {"Main St.", "Boston", "CA", 20777, 222345666}, 22345.25, {12, 20, 2023} },  
    {"Daryl", {"Main St.", "Dallas", "CA", 34777, 222345666}, 12345.03, {12, 20, 2023} },  
    {"Santiago", {"Main St.", "Las Vegas", "CA", 65777, 222345666}, 7778.07, {12, 20, 2023} },  
    {"Hanks", {"Main St.", "San Antonio", "CA", 30777, 222345666}, 20777.00, {12, 20, 2023} },
    {"Johnson", {"Main St.", "San Diego", "CA", 50777, 222345666}, 907.00, {12, 20, 2023} },  
    {"Miller", {"Main St.", "New Jersey", "CA", 60777, 222345666}, 766.00, {12, 20, 2023} },  
    {"Ruth", {"Main St.", "Detroit", "CA", 90777, 222345666}, 555.07, {12, 20, 2023} }
};

// function prototypes
void printMenu();
void printFullData(const Customer[], int);
void changeCustomerData(Customer customers[], int);
void printCustomer(Customer customers[], int index);
void addNewCustomer(Customer customers[], int &n);

int main() {
    int number = 0;
    int customerIndex;
    int n = 10;

    while (number != 4) {
        printMenu();
        cin >> number;
        cout << endl;

        if (number == 1) {
            printFullData(customers, ARRAY_SIZE);
        } else if (number == 2) {
            cout << "Please enter the customer number to update the data: " << endl;
            cin >> customerIndex;
            cout << endl;
            changeCustomerData(customers, customerIndex);
        } else if (number == 3) {
            cout << "Please enter the new customer data." << endl;
            addNewCustomer(customers, n);

        }
    }

    return 0;

}

void printMenu()
{
    cout << "Select one of the following options:" << endl;
    cout << "1: To print the entire data" << endl;
    cout << "2: To update/change a customer data" << endl;
    cout << "3: To add a new customer" << endl;
    cout << "4: To quit the program" << endl;
}

void printFullData(const Customer customers[], int size) {
  
    cout << "----------------------------------------------------------------------------" << endl;
    for (int i = 0; i < size; i++) {
        if (customers[i].name != "") {
            cout << i << ": " << customers[i].name << " " << customers[i].address.street << " " << customers[i].address.city << " " << customers[i].address.state << " " 
            << customers[i].address.zip << " " << customers[i].address.telephone << " " << customers[i].accountBalance << " " 
            << customers[i].dateOfLastPayment.month << " " << customers[i].dateOfLastPayment.day << " " << customers[i].dateOfLastPayment.year << endl;
        }
    }
    cout << "----------------------------------------------------------------------------" << endl;
}

void changeCustomerData(Customer customers[], int index) {
    string fieldName;

    printCustomer(customers, index);

    cout << "Please enter what data you want to change name(n), street(str), city(c), state(st), zip(z), telephone(tel),"; 
    cout << "account ballance(ab), month of last payment(molp), day of last payment(dolp), year of last paymen(yolp): " << endl;
    cin >> fieldName;
    cout << endl;

    if (fieldName == "n") {
        string newData;
        cout << "Please enter name: " << endl;
        cin >> newData;
        cout << endl;

        customers[index].name = newData;
        printCustomer(customers, index);

    } else if (fieldName == "str") {
        string newData;
        cout << "Please enter street: " << endl;
        cin >> newData;
        cout << endl;

        customers[index].address.street = newData;
        printCustomer(customers, index);

    } else if (fieldName == "c") {
        string newData;
        cout << "Please enter city: " << endl;
        cin >> newData;
        cout << endl;

        customers[index].address.city = newData;
        printCustomer(customers, index);

    } else if (fieldName == "st") {
        string newData;
        cout << "Please enter state: " << endl;
        cin >> newData;
        cout << endl;

        customers[index].address.state = newData;
        printCustomer(customers, index);

    } else if (fieldName == "z") {
        int newData;
        cout << "Please enter zip: " << endl;
        cin >> newData;
        cout << endl;

        customers[index].address.zip = newData;
        printCustomer(customers, index);

    } else if (fieldName == "tel") {
        int newData;
        cout << "Please enter telephone: " << endl;
        cin >> newData;
        cout << endl;

        customers[index].address.telephone = newData;
        printCustomer(customers, index);

    } else if (fieldName == "ab") {
        double newData;
        cout << "Please enter account ballance: " << endl;
        cin >> newData;
        cout << endl;

        customers[index].accountBalance = newData;
        printCustomer(customers, index);

    } else if (fieldName == "molp") {
        int newData;
        cout << "Please enter month: " << endl;
        cin >> newData;
        cout << endl;

        customers[index].dateOfLastPayment.month = newData;
        printCustomer(customers, index);

    } else if (fieldName == "dolp") {
        int newData;
        cout << "Please enter day: " << endl;
        cin >> newData;
        cout << endl;

        customers[index].dateOfLastPayment.day = newData;
        printCustomer(customers, index);

    } else if (fieldName == "yolp") {
        int newData;
        cout << "Please enter year: " << endl;
        cin >> newData;
        cout << endl;

        customers[index].dateOfLastPayment.year = newData;
        printCustomer(customers, index);

    } 
}

void printCustomer(Customer customers[], int index) {
    cout << "----------------------------------------------------------------------------" << endl;
    cout << customers[index].name << " " << customers[index].address.street << " " << customers[index].address.city << " " << customers[index].address.state << " " 
        << customers[index].address.zip << " " << customers[index].address.telephone << " " << customers[index].accountBalance << " " 
        << customers[index].dateOfLastPayment.month << " " << customers[index].dateOfLastPayment.day << " " << customers[index].dateOfLastPayment.year << endl;
    cout << "----------------------------------------------------------------------------" << endl;
}

void addNewCustomer(Customer customers[], int &n) {
    Customer newCustomer;

    if(n < ARRAY_SIZE) {
        string name;
        cout << "Please enter name: " << endl;
        cin >> name;
        cout << endl;
        newCustomer.name = name;
       
        string street;
        cout << "Please enter street: " << endl;
        cin >> street;
        cout << endl;
        newCustomer.address.street = street;
    
        string city;
        cout << "Please enter city: " << endl;
        cin >> city;
        cout << endl;
        newCustomer.address.city = city;

        string state;
        cout << "Please enter state: " << endl;
        cin >> state;
        cout << endl;
        newCustomer.address.state = state;

        int zip;
        cout << "Please enter zip: " << endl;
        cin >> zip;
        cout << endl;
        newCustomer.address.zip = zip;
      
        int telphone;
        cout << "Please enter telephone: " << endl;
        cin >> telphone;
        cout << endl;
        newCustomer.address.telephone = telphone;
        
        double ballance;
        cout << "Please enter account ballance: " << endl;
        cin >> ballance;
        if (ballance < 0) {
            cout << "Please enter valid positive ballance: " << endl;
            cin >> ballance;
        } else { 
            cout << endl;
        newCustomer.accountBalance = ballance;
        }
       
        
        int month;
        cout << "Please enter month: " << endl;
        cin >> month;
        cout << endl;
        newCustomer.dateOfLastPayment.month = month;
      
        int day;
        cout << "Please enter day: " << endl;
        cin >> day;
        cout << endl;
        newCustomer.dateOfLastPayment.day = day;

        int year;
        cout << "Please enter year: " << endl;
        cin >> year;
        cout << endl;
        newCustomer.dateOfLastPayment.year = year;

        customers[n] = newCustomer;
    }
    n = n + 1;
}
