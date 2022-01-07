// #include <iostream>
// using namespace std;

// int main(){

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k1, k2;
//         cin >> n >> k1 >> k2;

//         int w, b, sum;
//         cin >> w >> b;

//         sum = w + b;

//         // bool flag = true;

//         int temp1 = max(k1, w);
//         int temp2 = max(k2,b);

//         if (k1 == 0 && k2 == 0)
//         {
//             // flag = false;
//             cout << "NO" << endl;
            
//         }

//         else if (sum == 1)
//         {
//             cout << "NO" << endl;
//         }
        
//         // else if(abs(k1-w) == abs(k2-b)){
//         //     cout << "NO" << endl;
//         // }

//         else{
//             if (temp1 + temp2 > sum)
//             {
//                 cout << "YES" << endl;
//             }else{
//                 cout << "NO" << endl;
//             }
//         }

//         // if (temp1 + temp2 <= sum){
//         //     flag = true;
//         // }else{
//         //     flag = false;
//         // }

//         // if (flag)
//         // {
//         //     cout << "YES" << endl;
//         // }else{
//         //     cout << "NO" << endl;
//         // }

//     }

//     return 0;
// }


#include <bits/stdc++.h>
typedef int ll;
typedef long double ld;
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
typedef std::vector<long long> vi;
#define F first
#define S second
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
#define PB push_back
#define MP make_pair
#define PI 3.14159265358979323846
#define all(a) a.begin(), a.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
// const ll INF = LLONG_MAX / 2;
const ll N = 2e5 + 1;
using namespace std;
int main()
{
    fast;
    ll t = 1;
    std::cin >> t;
    while (t--)
    {
        ll n, k1, k2, w, b;
        cin >> n >> k1 >> k2 >> w >> b;
        ll j = 0, k3 = n - k1, k4 = n - k2;
        if (w <= (k1 + k2) / 2 && b <= (k3 + k4) / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}