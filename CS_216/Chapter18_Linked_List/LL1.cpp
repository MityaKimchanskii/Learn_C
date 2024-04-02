#include <iostream>
#include "NumberList.h"

using namespace std;

int main() {

    NumberList list;

    list.appendNode(2.5);
    list.appendNode(3.5);
    list.appendNode(7.5);
    list.appendNode(9.5);
    list.appendNode(15.5);
    list.appendNode(21.5);

    list.insertNode(9.8);

    list.displayNodeList();


    return 0;
}