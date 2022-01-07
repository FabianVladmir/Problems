#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    int n,m;
    cin>>n>>m;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ll y=x%m;
        mp[y]++;
    }
    ll total=0;
    for(auto i : mp){
        if(i.first==0 && i.second>0) total++;
        else if(mp.count(m-i.first)==0) total+=i.second;
        else if(m-i.first == i.first){
            total++;
        } 
        else if(m-i.first>i.first){
            ll a=i.second;
            ll b=mp[m-i.first];
            if(abs(a-b)<=1) total++;
            else if(a>b){
                a-=(b+1);
                total++;
                total+=a;
            }
            else{
                b-=(a+1);
                total++;
                total+=b;
            }
        }
    }
    cout<<total<<"\n";
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

// SECOND SOLUTION

//  int n, m;
//         cin >> n >> m;
//         map<int, int> cnt;
//         while (n--) {
//             int x;
//             cin >> x;
//             cnt[x % m]++;
//         }
//         int ans = 0;
//         for (auto &c : cnt) {
//             if (c.first == 0) ans++;
//             else if (2 * c.first == m) {
//                 ans++;
//             } else if (2 * c.first < m || cnt.find(m - c.first) == cnt.end()) {
//                 int x = c.second, y = cnt[m - c.first];
//                 ans += 1 + max(0, abs(x - y) - 1);
//             }
//         }
//         cout << ans << '\n';