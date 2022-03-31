#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>
#include "bubble_sort.h"
#include "quick_sort.h"


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


 //Genera un vector de tamanio _size con numeros random del 1 al 100
vector<int> generateVec(int _size)
{
    vector<int> vec;                 
    srand(time(0));               
    for(int i = 0; i <_size; i++){
        vec.push_back(rand() % 100 + 1);
    }
    return vec;
}




//Permite imprimir el array en consola
void displayArray(int* _array,int _size){
    for(int i = 0; i <_size; i++){
        cout<<_array[i]<<" ";
    }
    cout<<endl;
}

//Permite imprimir el vector en consola
void displayVec(vector<int>& vec, int _size){
    for(int i = 0; i <_size; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

//Ejecuta un algoritmo de ordenamiento sobre un array de tamaño _size
void executeSorting(int _size, char option){
    
    if (option=='b')
    {
        int* _array = generateArray(_size);
        displayArray(_array, _size);
        clock_t time = clock();
        bubbleSort(_array, _size);
        time = clock() - time;
        displayArray(_array, _size);
        fstream myFile;
        myFile.open("sorting_time_bubble.txt", ios::app);
        if(myFile.is_open()){
            myFile<<"Sorting an array of "<<_size<<" size "<<"has taken "<<(long double)time/CLOCKS_PER_SEC<<" seconds.\n";
            myFile.close();
        }
    }
    else if (option=='q'){
        vector<int> vec = generateVec(_size);
        displayVec(vec, _size);
        clock_t time = clock();
        vec = quicksort(vec);
        time = clock() - time;
        displayVec(vec, _size);
        fstream myFile;
        myFile.open("sorting_time_quick.txt", ios::app);
        if(myFile.is_open()){
            myFile<<"Sorting an array of "<<_size<<" size "<<"has taken "<<(long double)time/CLOCKS_PER_SEC<<" seconds.\n";
            myFile.close();
        }
    }
    cout<<endl;
}


#endif 