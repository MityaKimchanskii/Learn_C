#ifndef RAIN_H
#define RAIN_H
#include <iostream>
#include <string>

using namespace std;

class RainfallList {
    private:
    struct RainfallNode {
        string name;
        int quantity;
        size_t size;
        struct RainfallNode *next;
    };

    RainfallNode *head;

    public: 
    RainfallList() {
        head = nullptr;
    };

    ~RainfallList() {
        RainfallNode *nodePtr;
        RainfallNode *nextNode;

        nodePtr = head;

        while (nodePtr != nullptr) {
            nextNode = nodePtr->next;
            delete nodePtr;
            nodePtr = nextNode;
        }
    }
// Append the node to the list
    void appendNode(string n, int num) {
        RainfallNode *newNode;
        RainfallNode *nodePtr;
        newNode = new RainfallNode;
        newNode->name = n;
        newNode->quantity = num;
        newNode->next = nullptr;

        if (!head) {
             head = newNode;
        } else {
            nodePtr = head;

            while (nodePtr->next) {
                nodePtr = nodePtr->next;
                nodePtr->size += 1;
            }
            nodePtr->next = newNode;
        
        }
    }

    // Display the list
    void displayNodeList() const {
        RainfallNode *nodePtr;
        nodePtr = head;

        while (nodePtr) {
            cout << nodePtr->name << ": " << nodePtr->quantity << " ml." << endl;
            nodePtr = nodePtr->next;
        }      
    }

    // Insert the node
    void insertNode(string n, int num) {
        RainfallNode *newNode;
        RainfallNode *nodePtr;
        RainfallNode *previousNode = nullptr;

        newNode = new RainfallNode;
        newNode->name = n;
        newNode->quantity = num;

        if (!head) {
            head = newNode;
            newNode->next = nullptr;
        } else {
            nodePtr = head;
            previousNode = nullptr;

            nodePtr->size++;

            while (nodePtr != nullptr) {
                previousNode = nodePtr;
                nodePtr = nodePtr->next;
            }

            if (previousNode == nullptr) {
                head = newNode;
                newNode->next = nodePtr;
            } else {
                previousNode->next = newNode;
                newNode->next = nodePtr;
            }
        }
    }

    // Delete the node
    void deleteNode(string n) {
        RainfallNode *nodePtr;
        RainfallNode *previousNode;

        if (!head) {
            return;
        }

        if (head->name == n) {
            nodePtr = head;
            delete head;
            head = nodePtr;
        } else {
            nodePtr = head;

            while (nodePtr != nullptr && nodePtr->name != n) {
                previousNode = nodePtr;
                nodePtr = nodePtr->next;
            }

            if (nodePtr) {
                previousNode->next = nodePtr->next;
                delete nodePtr;
            }
        }
    }

    int yearlyRainfall() {
        int sum = 0;
        RainfallNode *nodePtr;
        nodePtr = head;

        while (nodePtr) {
            sum += nodePtr->quantity;
            nodePtr = nodePtr->next;
        }    

        cout << "Total precipitation for the year: " << sum << " ml." << endl;
        return sum;
    }

    int maxRainfall() const {
        int max = INT_MIN;
        
        for (RainfallNode* temp = head; temp != nullptr; temp = temp->next) {
            if (temp->quantity > max) {
                max = temp->quantity;
            }
        }
        cout << "Maximum rainfall for the year: " << max << "ml." << endl;
        return max;
    }

    int minRainfall() const {
        int min = INT_MAX;
        
        for (RainfallNode* temp = head; temp != nullptr; temp = temp->next) {
            if (head->quantity < min) {
                min = temp->quantity;
            }
        }
        cout << "The minimum rainfall for the year: " << min << "ml." << endl;
        return min;
    }
};

#endif