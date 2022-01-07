#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
void solve(){
    ll n,m,x;
    cin>>n>>m>>x;
    x--;
    ll a=x/n;
    ll b=x%n;
    ll ans=(b)*m + (a+1);
    cout<<ans<<"\n";
}  
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}