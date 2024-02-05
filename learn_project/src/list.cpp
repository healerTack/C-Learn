#include "list.h"

void List::initialize(SequentialList *list, int capacity)
{
    list->elements = new eleType[capacity];
    list->size = 0;
    list->capacity = capacity;
}

void List::destroy(SequentialList *list)
{
    delete[] list->elements;
}

int List::size(SequentialList *list) const
{
    return list->size;
}

bool List::isEmpty(SequentialList *list) const
{
    return list->size == 0;
}

void List::insert(SequentialList *list, int index, eleType element)
{
    // 检查溢出
    if (index < 0 || index > list->size)
    {
        throw std::invalid_argument("Invalid index");
    }
    // 数组扩容
    if (list->size == list->capacity)
    {
        int newCapacity = list->capacity * 2;
        eleType *newElements = new eleType[newCapacity];
        for (int i = 0; i < list->size; i++)
        {
            newElements[i] = list->elements[i];
        }
        delete[] list->elements;
        list->elements = newElements;
    }
    // 插入元素
    for (int i = list->size; i > index; --i)
    {
        list->elements[i] = list->elements[i - 1];
    }
    list->elements[index] = element;
    list->size++;
}

void List::deleteElement(SequentialList *list, int index)
{
    if (index < 0 || index >= list->size)
    {
        throw std::invalid_argument("Invalid index");
    }
    for (int i = index; i < list->size - 1; i++)
    {
        list->elements[i] = list->elements[i + 1];
    }
    list->size--;
}

int List::findElement(SequentialList *list, eleType element)
{
    for (int i = 0; i < list->size; i++)
    {
        if (list->elements[i] == element)
            return i;
    }
    return -1;
}

eleType List::getElement(SequentialList *list, int index)
{
    if (index < 0 || index >= list->size)
    {
        throw std::invalid_argument("Invalid index");
    }
    return list->elements[index];
}

void List::update(SequentialList *list, int index, eleType value){
    if (index < 0 || index >= list->size)
    {
        throw std::invalid_argument("Invalid index");
    }
    list->elements[index] = value;
}