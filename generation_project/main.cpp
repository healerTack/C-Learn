#include <iostream>
using namespace std;

inline double square(double x, double y) {return x*x + y*y;}

int main(int argc, char const * argv[]){
    double x, y;
    cin >> x >> y;
    cout << square(x, y) << endl;    
    return 0;
}