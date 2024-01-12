#include <iostream>
#include "dog.h"
#include "cat.h"

int main(int argc, char const * argv[]){
    Dog dog;
    cout << dog.barking() << endl;
    Cat cat;
    cout << cat.barking() << endl;
    return 0;
}