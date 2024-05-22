#ifndef NUMBERLIST_H
#define NUMBERLIST_H

#include <iostream>

using namespace std;

class NumberList {
    private:
        // Declare a structure for the nodes list.
        struct ListNode {
            int value;              // variable to hold the value of the node
            struct  ListNode *next;    // pointer to the next node
        };

        ListNode *head;                // list head pointer

        public:
            // Constructor.
            NumberList() {
                head = nullptr;
            };

            // Destructor.
           ~NumberList() {
                ListNode *nodePtr;
                ListNode *nextNode;

                nodePtr = head;

                while (nodePtr != nullptr) {
                    nextNode = nodePtr->next;
                    delete nodePtr;
                    nodePtr = nextNode;
                }
           }
            // Append the node to the list
            void appendNode(int num) {
    
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

            // Display the list
            void displayNodeList() const {
                ListNode *nodePtr;
                nodePtr = head;

                while (nodePtr) {
                    cout << nodePtr->value << endl;
                    nodePtr = nodePtr->next;
                }
                
            }

            // Insert the node
            void insertNode(int num) {
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

            // Delete the node
            void deleteNode(int num) {
                ListNode *nodePtr;
                ListNode *previousNode;

                if (!head) {
                    return;
                }

                if (head->value == num) {
                    nodePtr = head;
                    delete head;
                    head = nodePtr;
                } else {
                    nodePtr = head;

                    while (nodePtr != nullptr && nodePtr->value != num) {
                        previousNode = nodePtr;
                        nodePtr = nodePtr->next;
                    }

                    if (nodePtr) {
                        previousNode->next = nodePtr->next;
                        delete nodePtr;
                    }
                }
            }
};

#endif