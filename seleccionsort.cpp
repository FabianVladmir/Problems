#include <iostream>
using namespace std;
// complejidad n**2

void ordSeleccion(int [], int );
void intercambiar(int &, int &);

int main(){
    int arreglo [] = {5,3,9,10,8,6};
    int size = sizeof(arreglo)/sizeof(arreglo[0]);
    
    ordSeleccion(arreglo,size);
    for(int i=0; i<size; i++){
        cout << arreglo[i] << " ";
    }
    return 0;
}

void ordSeleccion(int a[], int n){
    int indxMenor, i, j;
    for ( i = 0; i < n - 1; i++)
    {
        indxMenor = i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j] < a[indxMenor])
            {
                indxMenor = j;
            }            
        }
        intercambiar(a[i], a[indxMenor]);
    }    
}

void intercambiar(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
    }
