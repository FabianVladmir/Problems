#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; 
    cin >> t;
    while (t--)
    {
        
        int n(0), n_odd(0), n_even(0);
        cin >> n;
      
        int answer[n];
        int arr[n];

        
        for (size_t i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            
            if (x%2 != 0 || x == 1)
            {
                answer[n_odd++] = x;
                
            }else{

                arr[n_even++] = x;
                
            }
            
        }
        
        for (int i = n_odd, j = 0; n_even > 0; n_even--)
        {
            answer[i++] = arr[j++];
        }
        
        for (size_t i = 0; i < n; i++)
        {
            cout << answer[i] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}