#include <iostream>
using namespace std;

int main(){
    int n, *p, q, m, cont(0);
    cin >> n;
    p = new int [n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    cin >> q;
    while (q--)
    {
        cin >> m;
        for (size_t i = 0; i < n; i++)
        {
            if (m >= p[i])
            {
                cont++;
            }            
        }
        cout << cont++ << endl;
        cont = 0;        
    }
    

    return 0;
}