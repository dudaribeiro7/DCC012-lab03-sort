#include "sort.h"

#include <iostream>
using namespace std;

bool compara_int(int &a, int &b){
    return a < b;
}

int main(){

    int array[] = {3, 4, 7, 8, -2, 5, 11, 1, 67, 2};
    int n = sizeof(array) / sizeof(array[0]);
    int array2[] = {-2, 1, 2, 3, 4, 5, 7, 8, 11, 67};
    merge_sort<int>(array, n, compara_int);
    for(int i=0; i<n; i++){
        if(array[i] != array2[i]){
            cout << "mergeSort falhou!" << endl;
            cout << "array:" << endl;
            for(int j=0; j<n; j++){
                cout << array[j] << ", ";
            }
            return -1;
        }
    }
    cout << "mergeSort funcionou!" << endl;
    return 0;
}