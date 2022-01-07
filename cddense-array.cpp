#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int array[n];
        
        for (size_t i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        int c=0;
        for (int i = 0; i < n-1; i++)
        {
            int mi= min(array[i],array[i+1]);
        
            int ma = max(array[i], array[i + 1]);
            while (ma>mi*2)
            {
                mi=mi*2;
                c++;
            }
            
        }
        cout<<c<<"\n";

    }

    return 0;
}