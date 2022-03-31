#include <iostream>
#include <memory>
#include "bubble_sort.h"
#include "functions.h"

using namespace std;

int main(){
    executeSorting(100, 'b');
    executeSorting(1000, 'b');
    executeSorting(10000, 'b');

    executeSorting(100, 'q');
    executeSorting(1000, 'q');
    executeSorting(10000, 'q');
}