#include <iostream>
#include <vector>
#include <chrono>
#include <time.h>
#include "mergesort.cpp"
#include "intercala.cpp"
#include "generator_random.cpp"

using namespace std;

//Autor : Fabian Vladimir Florez Aguilar
int main(){

    int n;
    cin >> n;
    
    vector<int> arr(n);    
    generatorRandom(arr,n);
    vector<int> arr2(arr);       

    // cout << "\nMergeSort: \n\n ";
    // printarr(arr2,n);
    // auto start2 = std::chrono::high_resolution_clock::now();
    // mergeSort(arr2,0,n);
    // auto end2 = std::chrono::high_resolution_clock::now();
    // cout << "Time : " << std::chrono::duration_cast<std::chrono::nanoseconds>(end2-start2).count() << " ns\n";
    // printarr(arr2,n);

    
    int q = (n/2)-1;

    cout << "Intercala: \n\n ";
    printarr(arr,n);
    mergeSort(arr,0,n/2 - 1);
    mergeSort(arr,(n/2)+1,n);

    auto start1 = std::chrono::high_resolution_clock::now();    
    intercala(arr,0,q,n);
    auto end1 = std::chrono::high_resolution_clock::now();
    cout << "Time : " << std::chrono::duration_cast<std::chrono::nanoseconds>(end1-start1).count() << " ns\n";
    printarr(arr,n);


    return 0;
}



