#pragma once
using namespace std;

#define eleType int

typedef struct ListNode
{
    eleType data;
    ListNode *next;

    ListNode(eleType x) : data(x), next(nullptr){} 

}node,*pnode;

class LinkedList
{
private:
    pnode head;
    int size;

public:
    // 初始化
    LinkedList(): head(nullptr), size(0){}
    // 析构
    ~LinkedList();
    // 插入节点
    void insert(int i, eleType value);
    // 删除节点
    void remove(int i);
    // 查询元素
    pnode find(eleType value);
    // 获取节点
    pnode get(int i);
    // 更新节点
    void update(int i, eleType value);
    // 输出链表
    void print();
};