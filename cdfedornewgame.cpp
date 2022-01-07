#include <iostream>
using namespace std;

int main(){
    int n, m, k, cont(0), sold, *p;
    cin >> n >> m >> k;
    p = new int[m+1];
    for (size_t i = 0; i < m+1; i++)
    {
        cin >> p[i];
    }
    for (size_t i = 0; i < m; i++)
    {
        if (p[i] != p[i+1])
        {
            cont++;
        }        
    }
    if (cont == k)
    {
        cout << k << endl;
    }else
    {
        cout << 0 << endl;
    }
    return 0;
}