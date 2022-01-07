#include<bits/stdc++.h>
using namespace std;
 
#pragma GCC push_options
#pragma GCC optimize ("unroll-loops")
 
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x,y) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<"\n"
 
#define pow2(x) ((x)*(x))
#define ll long long
#define ld long double
#define eb emplace_back
#define pb push_back
#define pf push_front
 
#define mod 1000000007
#define clock (clock() * 1000.0 / CLOCKS_PER_SEC)
 
#define mp make_pair
#define ff first
#define ss second
#define null NULL
 
#define all(c) (c).begin(),(c).end()
#define nl "\n"
 
typedef vector<ll> vl;
typedef vector< vl > vvl;
typedef pair< ll,ll> pll;
typedef map< ll,ll> mll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll t;
    cin >> t;
    while(t--)
    {
		ll n;
        cin>>n;
 
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
 
        ll freq[200007]={0};
        if(n==1){
            cout<<"0"<<"\n";
        }else{  
            ll count_unique=0;
            ll count_same=0;
            for(ll i=0;i<n;i++){
                if(freq[a[i]]==0){
                    freq[a[i]]++;
                    count_unique++;
                    count_same = max(count_same,freq[a[i]]);
                }else{
                    freq[a[i]]++;
                    count_same = max(count_same,freq[a[i]]);
                }
            }
 
            //watch2(count_same,count_unique);
            if(count_same == count_unique-1){
                cout<<count_same<<"\n";
            }else{
                ll val1 = min(count_same,count_unique-1);
                ll val2 = min(count_same-1,count_unique);
                cout<<max(val1,val2)<<"\n";
            }
        }
    }
    return 0;
}