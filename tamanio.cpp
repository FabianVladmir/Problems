#include <iostream>

using namespace std;

int tamanio_recursivo(char [], int);
int tamanio(char []);
int main(){
    char cad[] = "Esto es una cadena";

    cout << tamanio(cad) << endl;
    cout << tamanio_recursivo(cad, 0) << endl;
    return 0;
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

int tamanio_recursivo(char bc[], int i){
    
    if(bc[i] != '\0'){
        i++;
        return 1 + tamanio_recursivo(bc, i);
    }
}