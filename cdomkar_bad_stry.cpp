#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin>>n;
        int f=0;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x<0)
                f=1;
        }
 
        if(f)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            cout<<101<<"\n";
 
 
            for (int i = 0; i <= 100; i++)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
            
        }
        
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}