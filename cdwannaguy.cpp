#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(){
    int max, *p, m,n, cont(0);
    bool band = true;
    cin >> max >> m;
    p = new int[m];    

    for (size_t i = 0; i < m; i++)
    {
        cin >> p[i];

    }
    cin >> n;
    
    for (size_t i = m; i < m+n; i++)
    {
        cin >> p[i];
    }
    sort(p,p+(m+n));
    for (size_t i = 0; i < m+n; i++)
    {
        if(p[i] != p[i+1]){
            cont++;
        }
    }
    
    if(max == cont){
        cout << "I become the guy" << endl;
    }
    else{
        cout << "oh my keyboard" << endl;
    }
    
    

    return 0;
}