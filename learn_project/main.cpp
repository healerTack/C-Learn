#include <iostream>
#include <array>
using namespace std;

#define bigger(a, b) a>b?a:b;

inline double square(double x){return x*x;}

void cheers(int n); // 发出n次cheers
double cube(double x); // 计算x的三次方
void revalue(int val, int* array, int n); // 修改数组内容
int sum(const int* begin, const int* end); // 数组范围求和
void fill(array<double, 4>* pa); // 填充array数组
void show(array<double, 4> pa); // 遍历输出array数组
void swapr(int & a, int & b); // 利用引用交换a,b
void swapp(int * p, int * q); // 利用指针交换p,q

const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Autumn", "Winter"};

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
    cout << sum(pa, pa+10) << endl;
    delete[] pa;
    
    array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    
    int wallet1 = 300, wallet2 = 350;
    cout << "wallet1 = $" << wallet1 << " and wallet2 = $" << wallet2 << endl;
    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1 << " and wallet2 = $" << wallet2 << endl;
    cout << "Using pointers to swap contents:\n";
    swapp(&wallet1, &wallet2);
    cout << "wallet1 = $" << wallet1 << " and wallet2 = $" << wallet2 << endl;
    


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

int sum(const int* begin, const int* end){
    const int *p;
    int total = 0;
    for(p=begin;p!=end;++p)
        total += *p;
    return total;
}

void fill(array<double, Seasons>* pa){
    for(int i = 0; i < Seasons; i++){
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(array<double, Seasons> pa){
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++){
        cout << Snames[i] << ": $"<< pa[i] << endl;
        total += pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

void swapr(int &a, int &b){
    int temp;
    temp = a; a = b; b = temp;
}

void swapp(int *p, int *q){
    int temp;
    temp = *p; *p = *q; *q = temp;
}