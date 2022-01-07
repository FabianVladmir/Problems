#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){      
   
    int ans = 0;
    int idx = 1;
    
    if(n == 1){
        cout << ans << endl;
        return;
    }
    
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] > idx){
            arr[n-1]--;
            ans++;
        }

        if(i == n-1){
            if(arr[n-1] > idx){
                ans = arr[n-1];
            }   
            else{
                if(arr[n-1] < arr[n-2]){
                    ans++;
                }

            }
        }
        idx++;
    }
    
    cout << ans << endl;
    
}



int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];       

        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr,n);
    }
    


    return 0;
}