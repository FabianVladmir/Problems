#include <iostream>
using namespace std;

void insertionSort(int *a, int n);

int main(){
    
    int arr[] {5, 20, 3, 8, 45};
    int size = sizeof(arr)/sizeof(arr[0]);

 
    insertionSort(arr, size);  
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


void insertionSort(int *a, int n){
  int k, j, temp;
  for(k = 1; k <= n-1; k++){
    temp = a[k];
    j = k-1;
    while(temp < a[j] && j >= 0){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = temp;
  }
}