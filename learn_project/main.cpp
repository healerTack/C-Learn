#include <iostream>
#include "chain.h"

int main(int argc, char const *argv[])
{
    LinkedList list;
    list.insert(0,0);
    list.insert(1,10);
    list.insert(2,20);
    list.insert(3,30);
    list.insert(4,40);
    list.insert(5,50);
    list.print();
    return 0;
}