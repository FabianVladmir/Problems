#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main() {
    int n, *p, aux;
    cin >> n;
    p = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p+n);
    
    for (size_t i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    
    delete []p;
    
    return 0;
}