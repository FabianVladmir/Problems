#include <iostream>
using namespace std;
int suma_recursivo(int [], int);
int sumar(int *, int);
int main(){
    
    int arreglo[4] = {20, 40, 10, 10};
    
    cout << sumar(arreglo, 4) << endl;
    cout << suma_recursivo(arreglo, 4) << endl;
    return 0;
}

int sumar(int a[], int tam){
    int total(0);
    int *ptr_arr = a;
    for (size_t i = 0; i < tam; i++)
    {
        total+=a[i];
        *ptr_arr++;
    }
    return total;
}

int suma_recursivo(int *arr, int tam){
    if (tam == 1)
    {
        return *arr;
    }
    else
    {
        return *arr + suma_recursivo(++arr, --tam);
    }
    
}