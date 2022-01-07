#include <iostream>
using namespace std;

void mostrar(int arr[], int size);
int Maximo(int arr[], int size);
void radixSort(int arr[], int size);

int main() {  
  int arreglo[] = {10,15,1,60,5,100,25,50};
  
  int n = sizeof(arreglo)/sizeof(arreglo[0]);
  
  mostrar(arreglo, n);
  
  radixSort(arreglo, n);
  
  mostrar(arreglo, n);

  return 0;
}

void mostrar(int arr[], int size) {
  int i;
  for(i = 0; i < size; i++) {
    cout <<  arr[i] << " ";
  }
  cout << "\n";
}

int Maximo(int arr[], int size) {
  int i, max = arr[0];
  for(i = 1; i < size; i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

void radixSort(int arr[], int size) {
  int i, max, urna[10], count[10], expo = 1;

  max = Maximo(arr, size);

  while(max / expo > 0) {
    //iniciar
    for(i = 0; i < 10; i++) {
      count[i] = 0;
    }

    //contador
    for(i = 0; i < size; i++) {
      count[ (arr[i] / expo) % 10 ]++;
    }

    //recuento de la posicion
    for(i = 1; i < size; i++) {
      count[i] += count [i - 1];
    }

    //buscando
    for(i = size - 1; i >= 0; i--) {
      urna[ count[ (arr[i]/expo) % 10 ]  - 1] = arr[i];
      count[ (arr[i]/expo) % 10 ]--;
    }

    //copiando
    for(i = 0; i < size; i++) {
      arr[i] = urna[i];
    }
    
    expo *= 10;
  }
}