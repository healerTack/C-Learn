#include <iostream>
using namespace std;

#define bigger(a, b) a>b?a:b;

void cheers(int n); // 发出n次cheers
double cube(double x); // 计算x的三次方

int main(int argc, char const * argv[]){
    int a = bigger(1, 2);
    cout << a << endl;
    cheers(a);
    cout << cube(a) << endl;
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