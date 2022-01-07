#include <iostream>
using namespace std;
int suma_recursivo(int [], int);
int sumar(int [], int);
int main(){
    int len(4);
    int arreglo[4] = {20, 40, 10, 10};
    
    cout << sumar(arreglo, 4) << endl;
    cout << sumar_recursivo(arreglo, 4) << endl;
    return 0;
}

int sumar(int a[4], int tam){
    int suma(0);
    for (size_t i = 0; i < tam; i++)
    {
        suma+=a[i];
    }
    return suma;
}

int sumar_recursivo(int a[4], int tam){
    if (tam == 0)
    {
        return 0;
    }else
    {
        return a[tam-1] + sumar_recursivo(a, --tam);
    }    
    
}