#include <iostream>
using namespace std;
void invertir(int [], int);
void intercambio(int *, int *);
void invertir_recursivo(int *, int *, int);
void imprimir(int [], int);

int main(){    
    int arreglo[4] = {10, 50, 30, 15};    
    int arreglo_2[4] = {15,10, 35, 6};
    int size_1 = sizeof(arreglo)/sizeof(arreglo[0]);
    invertir(arreglo, 4);
    imprimir(arreglo, size_1);
    int size_2 = sizeof(arreglo_2)/sizeof(arreglo_2[0]);
    int *temp = arreglo_2;
    invertir_recursivo(arreglo_2,temp ,size_2);
    imprimir(arreglo_2, size_2);
    return 0;
}

void invertir(int arr[], int tam){
   int *aux_ptr = arr;
   int *aux_ptr1 = aux_ptr + tam -1;
    for (int i = 0; i < tam/2; i++)
    {
        intercambio(aux_ptr++, aux_ptr1);        
    }
}

void intercambio(int *n, int *m){
    int aux = *n;
    *n = *m;
    *m = *n;
}

void invertir_recursivo(int *n, int *m, int tam){
    if (m < n)
    {
        return;
    }
    intercambio(n++, m--);
    invertir_recursivo(n, m, tam-1);
}

void imprimir(int p[], int tam){
    for (size_t i = 0; i < tam; i++)
    {
        cout << p[i] << " ";
    }
    
}