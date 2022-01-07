 
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int one=0;
    int zero=0;
    vector<pair<int,int>>x;
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1') one++;
        else zero++;
        if(one == zero){
            x.push_back({j,i});
            j=i+1;
        }
    }
    for(auto i : x){
        int start=i.first;
        int end=i.second;
        if(a[start]==b[start]) continue;
        else{
            for(int j=start;j<=end;j++){
                if(a[j]=='0') a[j]='1';
                else a[j]='0';
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
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


// #include <bits/stdc++.h>
 
// using namespace std;
 
// void solve() {
//     int n;
//     string a, b;
//     cin >> n >> a >> b;
//     a.push_back('0');
//     b.push_back('0');
//     int cnt = 0;
//     for(int i = 0; i < n; i++) {
//         cnt += (a[i] == '1') - (a[i] == '0');
//         if((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt != 0) {
//             cout << "NO\n";
//             return;
//         }
//     }
//     cout << "YES\n";
// }
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int te;
//     cin >> te;
//     while(te--) {
//         solve();
//     }
// }