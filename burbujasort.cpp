#include <iostream>
void intercambio(int &a, int &b){
    int aux = b;
    b = a;
    a = aux;
}

void Burbuja(int a[], int n){
    bool band = true;
    int pasada, j;
    for ( pasada = 0; pasada < n - 1 && band; pasada++)
    {
        band = false;
        for ( j = 0; j < n -pasada - 1; j++)
        {
            if (a[j] > a[j+1])
            {
                band = true;
                intercambio(a[j], a[j+1]);
            }            
        }        
    }    
}
// complejidad n**2