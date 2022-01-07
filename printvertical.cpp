#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, exp(10), div(1), aux, unidades(0), cont(0);
    
    cout << "Digite un numero entero [1-1M]: ";
    cin >> n;
    aux = n;
    while (aux > 10)
    {
        div++;
        aux/=10;
    }
    aux = n;

    while (div--)
    {
        if (n > 10)
        {
            while (n > exp)
            {
                n/=10;
            }
        cout << n - unidades << endl;
        n = aux;
        exp*=10;
        ++cont;
        unidades = pow(10,cont);
        }
    }
    

    return 0;
}