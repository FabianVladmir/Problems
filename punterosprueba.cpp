#include <iostream>
#include <math.h>
int contarprimos(int *);
int esprimo(int );
using namespace std;

int main(){
    int arreglo[] = {2,9,7,5,13,6};
    cout << contarprimos(arreglo) << endl;


    return 0;
}

int contarprimos(int *arr){
    int cont(0);
    for (; *arr != '\0' ; arr++)
    {
        if (esprimo(*arr))
        {
            cont++;
        }        
    }
    return cont;
}

int esprimo(int n){
    int i;
    if(n < 2) 
        return 0;
    else{
        for(i=2; i <=sqrt(n); i++){
        if(n % i == 0) {return 0;}      
        }
    }
    return 1;
}