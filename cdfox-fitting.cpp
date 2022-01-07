// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;


// int main(){

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, w;
//         cin >> n >> w;
//         vector<int> arr(n);
//         for (size_t i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         sort(arr.begin(), arr.end());

//         int answer(1);

//         while (!arr.empty())
//         {
//             int temp = w;
//             temp -= arr.back();
            
//             if(temp <= arr.back()){
//                 temp = w;
//                 answer++;
//             }

//             arr.pop_back();
//         }        
        
//         cout << answer << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
void solve(){
    ll n,w;
    cin>>n>>w;
    multiset<ll>ms;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        ms.insert(x);
    }
    int h=1,left=w;
    while(!ms.empty()){
        auto itr = ms.upper_bound(left);
        if(itr==ms.begin()){
            left=w;
            h++;
        }
        else{
            itr--;
            int val = *itr;
            left-=val;
            ms.erase(itr);
        }
    }
    cout<<h<<"\n";
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