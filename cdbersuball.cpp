#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int *n, *m, a, b, minimo, cont(0);
    cin >> a;
    n = new int [a];
    for (size_t i = 0; i < a; i++)
    {
        cin >> n[i];
    }
    cin >> b;
    m = new int [b];
    for (size_t i = 0; i < b; i++)
    {
        cin >> m[i];
    }
    sort(n, n+a);
    sort(m, m+b);
    minimo = min(a,b);
    for (size_t i = 0; i < minimo; i++)
    {
        if (m[i] - n[i] <= 1 )  
        {
            cont++;
        }
        
    }
    cout << cont << endl;
    return 0;
}