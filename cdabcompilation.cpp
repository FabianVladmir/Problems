#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int *p, *q, *r, n, aux1, aux2;
    cin >> n;
    p = new int[n];
    q = new int[n-1];
    r = new int[n-2];
    for (size_t i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (size_t i = 0; i < n-1; i++)
    {
        cin >> q[i];
    }
    for (size_t i = 0; i < n-2; i++)
    {
        cin >> r[i];
    }
    sort(p, p+n);
    sort(q, q+n-1);
    sort(r, r+n-2);
    
    for (size_t i = 0; i < n; i++)
    {
        if (p[i] != q[i])   
        {
            aux1 = p[i];
            break;
        }        
    }
    for (size_t i = 0; i < n-1; i++)
    {
        if (q[i] != r[i])
        {
            aux2 = q[i];
            break;
        }        
    }
    cout << aux1 << "\n" << aux2 << endl;
    
    return 0;
}