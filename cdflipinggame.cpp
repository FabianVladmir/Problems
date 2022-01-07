#include <iostream>
using namespace std;

int main(){
    int cont_cero(0), cont_uno(0), n, *p, cero_max(-1), total;
    cin >> n;
    p = new int [n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        if (p[i] == 1)
        {
            cont_uno++;
            if (cont_cero > 0)
            {
                cont_cero--;
            }            
        }
        else
        {
            cont_cero++;
            if (cont_cero > cero_max)
            {
                cero_max = cont_cero;
            }            
        }       
    }
    total = cont_uno + cero_max;
    cout << total << endl;

    delete []p;   
    return 0;
}