#include <iostream>
using namespace std;
void unir_char(char [], char []);
int tamanio(char[]);

int main(){
    char cad_a[255] = "Esto es una prueba";
    char cad_b[255] = " que concadena dos cadenas char";
    cout << cad_a << endl;
   
    
    unir_char(cad_a, cad_b);
    cout << cad_a << endl;
    return 0;
}

void unir_char(char a[] , char b []){
    int i, j;
    j = tamanio(a);
    for ( i = 0; b[i] != '\0'; i++, j++)
    {
        a[j] = b[i];
    }
    cout << j << endl;
    a[j] = '\0';
}

int tamanio(char ab[]){
    int total(0), i(0);
    while (ab[i])
    {
        if ((ab[i]) != '\0')
        {
            total++;
        }
        i++;
    }
    return total;
}