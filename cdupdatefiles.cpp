#include <bits/stdc++.h>
using namespace std;

void solve(int k, int n){

    if(k==1){
        cout << 0 << endl;
        return;
    }
    if(n==1){
        cout << k-n << endl;
        return;
    }
    
    int ans = 0;
    int maxupadate = 1;
    while (k > 0)
    {
        if(n >= maxupadate){
            k-=maxupadate;
        }
        else{
            k-=n;
        }
        maxupadate = maxupadate*2;
        ans++;
        if(k<0)
            break;
    }
    
    cout << ans << endl;

}


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int k,n;
        cin >> k >> n;
        solve(k,n);
    }
    


    return 0;
}