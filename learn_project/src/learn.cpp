#include "learn.h"

void Learn::cheers(int n){
    for(int i=0; i<n; i++){
        cout << "Cheers!";
    }
    cout << endl;
}

double Learn::cube(double x){
    return x*x*x;
}

void Learn::revalue(int val, int* array, int n){
    for (int i = 0; i < n; i++){
        array[i] = val;
    }
}

int Learn::sum(const int* begin, const int* end){
    const int *p;
    int total = 0;
    for(p=begin;p!=end;++p)
        total += *p;
    return total;
}

void Learn::fill(array<double, Seasons>* pa){
    for(int i = 0; i < Seasons; i++){
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void Learn::show(array<double, Seasons> pa){
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++){
        cout << Snames[i] << ": $"<< pa[i] << endl;
        total += pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

void Learn::swapr(int &a, int &b){
    int temp;
    temp = a; a = b; b = temp;
}

void Learn::swapp(int *p, int *q){
    int temp;
    temp = *p; *p = *q; *q = temp;
}