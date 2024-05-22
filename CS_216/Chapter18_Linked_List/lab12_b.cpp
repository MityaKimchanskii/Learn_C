#include <iostream>
#include "NumberList.h"

using namespace std;

int main() {

    NumberList list;

    cout << "Append node: " << endl;
    list.appendNode(2);
    list.appendNode(3);
    list.appendNode(7);
    list.appendNode(9);
    list.appendNode(15);
    list.appendNode(21);
    list.displayNodeList();

    cout << "Insert node: " << endl;
    list.insertNode(9);
    list.displayNodeList();

    cout << "Delete node: " << endl;
    list.deleteNode(3);
    list.deleteNode(7);
    list.displayNodeList();

    return 0;
}