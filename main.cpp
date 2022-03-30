#include <iostream>
#include <memory>
#include "bubble_sort.h"
#include "functions.h"
using namespace std;

int main(){
    int size=4;
    int* _array = new int[size]{3,1,2,5};
    bubbleSort(_array, size);
    displayArray(_array, size);
    delete [] _array;
    _array = nullptr;
}