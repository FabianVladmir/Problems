#include <iostream>
using namespace std;

void Counting_sort(int array[], int size) {
  
  int output[10];
  int count[10];
  int max = array[0];

  // mayor
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  // iniciar
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // contador
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // almacenar acumlado
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  // index conteo y original
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copinado
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

// Function to print an array
void imprimir(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);
  Counting_sort(array, n);

  imprimir(array, n);
}