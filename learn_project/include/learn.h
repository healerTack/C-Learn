#pragma once
#include <iostream>
#include <array>
#include <string>
using namespace std;

#define bigger(a, b) a > b ? a : b;

inline double square(double x) { return x * x; }

const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Autumn", "Winter"};


class Learn
{
public:
    void cheers(int n);                        // 发出n次cheers
    double cube(double x);                     // 计算x的三次方
    void revalue(int val, int *array, int n);  // 修改数组内容
    int sum(const int *begin, const int *end); // 数组范围求和
    void fill(array<double, 4> *pa);           // 填充array数组
    void show(array<double, 4> pa);            // 遍历输出array数组
    void swapr(int &a, int &b);                // 利用引用交换a,b
    void swapp(int *p, int *q);                // 利用指针交换p,q
};