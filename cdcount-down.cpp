#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];      
        
        int ans = 0;


        for (size_t i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);           
            
        }

        cout << arr;
        cout << endl;
        
        // for (size_t i = 0; i < n; i++)
        // {
        //     if(arr[i] > 0){
        //         ans+=arr[i];
        //         ans++;
        //     }
        //     if(i == n-1 && arr[n-1] > 0)
        //         ans+=arr[i];
        // }
        

        // // ans+=arr[n];
        // cout << ans << endl;        
    }

    return 0;
}