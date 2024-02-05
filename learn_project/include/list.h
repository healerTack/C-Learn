#pragma once
#include <stdexcept>
using namespace std;

#define eleType double

// 声明结构体
struct SequentialList
{
    eleType *elements;
    int size;
    int capacity;
};

class List
{
public:
    // 初始化
    void initialize(SequentialList *list, int capacity);
    // 销毁
    void destroy(SequentialList *list);
    // 获取数组大小
    int size(SequentialList *list) const;
    // 数组是否为空
    bool isEmpty(SequentialList *list) const;
    // 插入元素
    void insert(SequentialList *list, int index, eleType element);
    // 删除元素
    void deleteElement(SequentialList *list, int index);
    // 查找元素
    int findElement(SequentialList *list, eleType element);
    // 获取对应位置元素
    eleType getElement(SequentialList *list, int index);
    // 更新元素
    void update(SequentialList *list, int index, eleType value);
};