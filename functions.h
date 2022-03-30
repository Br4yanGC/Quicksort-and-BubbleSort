#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream>
#include <ctime>
#include <fstream>
#include "bubble_sort.h"

using namespace std;

 //Genera un array de tamanio _size con numeros random del 1 al 100
int* generateArray(int _size)
{
    int* _array;                            
    _array=new int[_size];                   
    srand(time(0));               
    for(int i = 0; i <_size; i++){
        _array[i] = rand() % 100 + 1;
    }
    return _array;
}

//Permite imprimir el array en consola
void displayArray(int* _array,int _size){
    for(int i = 0; i <_size; i++){
        cout<<_array[i]<<" ";
    }
    cout<<endl;
}

//Ejecuta un algoritmo de ordenamiento sobre un array de tamaño _size
void executeSorting(int _size){
    clock_t time = clock();
    int* _array = generateArray(_size);
    bubbleSort(_array, _size);
    time = clock() - time;

    fstream myFile;
    myFile.open("sorting_time.txt", ios::app);
    if(myFile.is_open()){
        myFile<<"Sorting an array of "<<_size<<" size "<<"has taken "<<(long double)time/CLOCKS_PER_SEC<<" seconds.\n";
        myFile.close();
    }
}

#endif 