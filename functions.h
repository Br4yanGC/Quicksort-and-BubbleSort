#include <iostream>
#include<ctime>

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
