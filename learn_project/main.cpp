#include <iostream>
#include <cstring>
using namespace std;

#define bigger(a, b) a>b?a:b;

void cheers(int n); // 发出n次cheers
double cube(double x); // 计算x的三次方
void revalue(int val, int* array, int n); // 修改数组内容

int main(int argc, char const * argv[]){
    int a = bigger(1, 2);
    cout << a << endl;
    cheers(a);
    cout << cube(a) << endl;
    int* pa = new int[10]{0};
    for (int i = 0; i < 10; i++)
        cout << pa[i];
    cout << endl;
    revalue(2, pa, 10);
    for (int i = 0; i < 10; i++)
        cout << pa[i];
    cout << endl;
    delete[] pa;
    return 0;
}

void cheers(int n){
    for(int i=0; i<n; i++){
        cout << "Cheers!";
    }
    cout << endl;
}

double cube(double x){
    return x*x*x;
}

void revalue(int val, int* array, int n){
    for (int i = 0; i < n; i++){
        array[i] = val;
    }
}