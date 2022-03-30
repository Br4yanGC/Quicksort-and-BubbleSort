#include <iostream>
using namespace std;

void bubbleSort(int* array, int size){
    bool swap = true;
    while (swap){
        swap = false;
        for(int index=0; index<size-1; ++index){
            int nextIndex = index+1;
            if(array[index]>array[nextIndex]){
                int temp = array[index];
                array[index] = array[nextIndex];
                array[nextIndex] = temp;
                swap = true;
            }
        }
    }
}