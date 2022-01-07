#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void merge(vector<int> &arr, int p, int q, int r) {  
  
  //creando los arrays
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // actualizar index
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  //selecciona el mas grande (L o M)
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  //copia los elementos sobrantes de L[i] si hay alguno
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// divide en dos arrays
void mergeSort(vector<int> &arr, int l, int r) {
  
  
  if (l < r) {
    //m es el punto medio
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // fucionar los dos arrays    
    merge(arr, l, m, r);
  }
 
}



// void printArray(int arr[], int size) {
//   for (int i = 0; i < size; i++)
//     cout << arr[i] << " ";
//   cout << endl;
// }

// int main() {
//   int arr[] = {6, 5, 12, 10, 9, 1};
//   int size = sizeof(arr) / sizeof(arr[0]);

//   mergeSort(arr, 0, size - 1);
  
//   printArray(arr, size);
//   return 0;
// }