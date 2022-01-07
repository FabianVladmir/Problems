#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while (t--)
    {
        int n,cont_eq(0), cont_neq(0);
        cin >> n;
        int arr[n];
        
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for (size_t i = 0; i < n-1; i++)
        {
            if (arr[i] != arr[i+1])
            {
               cont_neq++;
            }else
            {
                cont_eq++;
            }
        } 
        // cout << cont_neq <<" " << cont_eq << endl;        
        if (cont_eq - cont_neq >= 1)
        {
            cont_neq++;
        }else if (cont_neq - cont_eq >= 1)
        {
            cont_eq++;
        }
        
        int max_team = min (cont_eq, cont_neq);
        if (cont_eq == 0 || cont_neq == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << max_team << endl;
        }
        
    }
    return 0;
}