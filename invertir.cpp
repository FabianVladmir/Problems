#include <iostream>
using namespace std;
void invertir(int [], int);

void invertir_recursivo(int cad[],int inv[],int i,int tam);

int main(){    
    int arreglo[4] = {10, 50, 30, 15};
    int invertido[255];
    invertir(arreglo, 4);
    cout << endl;
    
    invertir_recursivo(arreglo, invertido, 0, 4);
    return 0;
}

void invertir(int arr[], int tam){
    for (int i = tam - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

void invertir_recursivo(int cad[],int inv[],int i,int tam)
{
    if(tam>=0)
    {
        inv[i]=cad[tam];
        cout<<inv[i] << " " ;
        i++;
        tam--;
        invertir_recursivo(cad,inv,i,tam);
    }
}