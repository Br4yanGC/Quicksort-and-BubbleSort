//
// Created by Juan jose on 30/03/2022.
//

#ifndef QUICKSORT_AND_BUBBLESORT_QUICK_SORT_H
#define QUICKSORT_AND_BUBBLESORT_QUICK_SORT_H

#include <vector>
using namespace std;


vector<int> operator+(const vector<int>& vect1, const vector<int>& vect2)
{
    std::vector<int> res;
    res.reserve( vect1.size() + vect2.size() );
    res.insert( res.end(), vect1.begin(), vect1.end() );
    res.insert( res.end(), vect2.begin(), vect2.end() );
    return res;
}


vector<int> quicksort(vector<int> array){
    if(array.size() < 2)
        return array;

    int pivote = array[0];
    vector<int> less;
    vector<int> greater;

    for(auto i = 1; i < array.size(); ++i){
        if(array[i] <= pivote)
            less.push_back(array[i]);
        else
            greater.push_back(array[i]);
    }

    vector<int> piv = {pivote};
    return quicksort(less) + piv + quicksort(greater);
}


#endif //QUICKSORT_AND_BUBBLESORT_QUICK_SORT_H
