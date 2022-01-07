#include <iostream>
#include <math.h>
using namespace std;
int invertir(int);
bool palindromo(int);
int mayor_palindromo(int , int);

int main(){
    int numero;
    cin >> numero;
    cout << invertir(numero) << endl; 
    cout << mayor_palindromo(1000, 1000) << endl;

    return 0;
}
int invertir(int n){
    int aux(0), reves(0);
    while (n > 0)
    {
        aux = n % 10;
        reves = (reves * 10) + aux;
        n = n / 10;
    }
    return reves;
}

bool palindromo(int p){
    if (p == invertir(p))
    {
       return true;
    }else
    {
        return false;
    }
}

int mayor_palindromo(int a, int b){
    int total(0), mayor(0);
    for (int i = 100; i < a; i++)
    {
        for (int j = 100; j < b; j++)
        {
            total = i * j;
            if (palindromo(total))
            {                 
                if(total > mayor){
                  mayor = total;
                }
            }
        }
    }
    return mayor;
}

