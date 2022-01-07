#include <iostream>
using namespace std;
// complejidad n**2
void ordInsercion (int [], int);
int main(){
    int arreglo[] = {20,80,50,30};
    ordInsercion(arreglo, 4);
    for (size_t i = 0; i < 4; i++)
    {
        cout << arreglo[i] << " ";
    }
    return 0;
}

void ordInsercion(int a[], int n){
    int i, j, aux;
    for ( i = 1; i < n; i++)
    {
        j = i;
        aux = a[i];

        while (j > 0 && aux < a[j-1])
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = aux;
    }
    
}