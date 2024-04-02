#include "NumberList.h"

void NumberList::appendNode(double num) {

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