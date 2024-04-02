#ifndef NUMBERLIST_H
#define NUMBERLIST_H

#include <iostream>

using namespace std;

class NumberList {
    private:
        // Declare a structure for the nodes list.
        struct ListNode {
            double value;              // variable to hold the value of the node
            struct  ListNode *next;    // pointer to the next node
        };

        ListNode *head;                // list head pointer

        public:

            NumberList() {
                head = nullptr;
            };

            // void insertNode(double);
            void deleteNode(double);
            // void appendNode(double num);
            // void displayNode(double);


            void appendNode(double num) {
    
                ListNode *newNode;
                ListNode *nodePtr;

                newNode = new ListNode;
                newNode->value = num;
                newNode->next = nullptr;

                if (!head) 
                    head = newNode;
                else {
                    nodePtr = head;

                    while (nodePtr->next) {
                        nodePtr = nodePtr->next;
                    }
        
                    nodePtr->next = newNode;
        
                }
            }

            void displayNodeList() const {
                ListNode *nodePtr;
                nodePtr = head;

                while (nodePtr) {
                    cout << nodePtr->value << endl;
                    nodePtr = nodePtr->next;
                }
                
            }

            void insertNode(double num) {
                ListNode *newNode;
                ListNode *nodePtr;
                ListNode *previousNode = nullptr;

                newNode = new ListNode;
                newNode->value = num;

                if (!head) {
                    head = newNode;
                    newNode->next = nullptr;
                } else {
                    nodePtr = head;
                    previousNode = nullptr;

                    while (nodePtr != nullptr && nodePtr->value < num) {
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
};

#endif