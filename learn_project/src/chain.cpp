#include "chain.h"
#include <iostream>
#include <stdexcept>
LinkedList::~LinkedList()
{
    pnode curr = head;
    while (curr != nullptr)
    {
        pnode tmp = curr;
        curr = curr->next;
        delete tmp;
    }
}

void LinkedList::insert(int i, eleType value)
{
    if (i < 0 || i > size)
    {
        throw out_of_range("Invalid position");
    }
    pnode newNode = new node(value);
    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        pnode curr = head;
        for (int j = 0; j < i - 1; j++)
        {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }
    size++;
}

void LinkedList::remove(int i)
{
    if (i < 0 || i >= size)
    {
        throw out_of_range("Invalid position");
    }
    if (i == 0)
    {
        pnode tmp = head;
        head = head->next;
        delete tmp;
    }
    else
    {
        pnode curr = head;
        for (int j = 0; j < i - 1; j++)
        {
            curr = curr->next;
        }
        pnode tmp = curr->next;
        curr->next = tmp->next;
        delete tmp;
    }
}

pnode LinkedList::find(eleType value)
{
    pnode curr = head;
    while (curr && curr->data != value)
    {
        curr = curr->next;
    }
    return curr;
}

pnode LinkedList::get(int i)
{
    if (i < 0 || i >= size)
    {
        throw out_of_range("Invalid position");
    }
    pnode curr = head;
    for (int j = 0; j < i; j++)
    {
        curr = curr->next;
    }
    return curr;
}

void LinkedList::update(int i, eleType value)
{
    get(i)->data = value;
}

void LinkedList::print()
{
    pnode curr = head;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
