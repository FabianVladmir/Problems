#include <iostream>
using namespace std;
// complejidad n**2

void intercambiar(int &, int &);
void ordBurbuja(double [], int);
int main(){


    return 0;
}

void ordBurbuja(int a[], int n){
    int i ,j;
    for ( i = 0; i < n - 1; i++)
    {
        for ( j = 0; j < n; j++)
        {
           if (a[i] > a[j])
           {
               intercambiar(a[i], a[j]);
           }           
        }        
    }    
}

void intercambiar(int &x, int &y){
    int aux = x;
    x = y;
    y = aux;
}