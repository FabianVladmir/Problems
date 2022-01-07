#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(101);
    for(int i=0;i<n;i++) cin>>a[i],b[a[i]]++;
    for(int i=0;i<=100;i++){
        if(b[i]>0){
            cout<<i<<" ";
            b[i]--;
        }
    }
    for(int i=0;i<=100;i++){
        for(int j=0;j<b[i];j++){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

//          int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; ++i) cin >> a[i];
//         sort(a.begin(), a.end());
//         vector<int> b;
//         for (int i = 0; i < n; i++) {
//             if (i == 0 || a[i] != a[i - 1]) {
//                 b.emplace_back(a[i]);
//             }
//         }
//         for (int i = 0; i < n; i++) {
//             if (i > 0 && a[i] == a[i - 1]) {
//                 b.emplace_back(a[i]);
//             }
//         }
//         for (auto x : b) cout << x << ' ';
//         cout << '\n';



int main(){

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        // int n;
        // cin >> n;
        // vector <int> a[n];

        // for (size_t i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        // }

        // sort(a,a+n);

        // for (size_t i = 0; i < n; i++)
        // {
        //     cout << a[i] << endl;
        // }

        // int b[n];
        
    }
    
    return 0;
}