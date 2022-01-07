#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /*
        int n, m, total(0);
        cin >> n >> m;
        if ((n == m) && (n < 2 && m < 2))
        {
            total++;            
           
        }else if ( (n == 1 || m == 1) && (n > 2 || m > 2))
        {
            int aux = max(n, m);
            
            while (aux > 0)
            {
                aux-=2;
                total++;
                if (aux == 1)
                {
                    total++;
                    --aux;
                }                
            }            
        }else
        {
            if ((n * m) % 2 == 0)
            {
                total = n;
            }else
            {
                total = ((n * m)/2) + 1;
            }
        }
        cout << total << endl;
        */
        int n, m;
        cin >> n >> m;
        if (m % 2 == 0)
        {
            cout << n * (m/2) << endl;
            
        }else
        {
            cout << (n* (m-1)/2) + (n+1)/2 << endl;
            
        }
    }
    return 0;
}