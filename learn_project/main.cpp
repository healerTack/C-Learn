#include <iostream>
#include "chain.h"

int main(int argc, char const *argv[])
{
    LinkedList list;
    list.insert(0, 0);
    list.insert(1, 10);
    list.insert(2, 20);
    list.insert(3, 30);
    list.insert(4, 40);
    list.insert(5, 50);
    list.print();
    list.remove(1);
    list.print();
    list.update(2, 60);
    list.print();
    cout << list.find(20)->data << endl;
    cout << list.get(3)->data << endl;
    return 0;
}