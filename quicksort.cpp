#include <iostream>
using namespace std;

void intercambio(int &a , int &b){
    int aux = a;
    a = b;
    b = aux;
}
void quicksort(int a[], int primero, int ultimo){
    int i, j, medio;
    double piv;
    medio = (primero + ultimo) / 2;
    piv = a[medio];
    i = primero;
    j = ultimo;
    do{
        while (a[i] < piv) 
        {
            i++;
        }while (a[j] > piv)
        {
            j--;
        }
        if (i <= j)
        {
            intercambio(a[i], a[j]);
            i++;
            j--;
        }    
        
    }while (i <= j);
    
        if (primero < j)
        {
            quicksort(a, primero, j);
        }
        if (i < ultimo)
        {
            quicksort(a, i , ultimo);
        }
}

int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  quicksort(arr, 0, size-1);
  
  for (int i = 0; i < size; i++)
  {
      cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}