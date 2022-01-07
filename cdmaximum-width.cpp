#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outpt.txt", "w", stdout);
 
#endif
    int t;
    t = 1;
    // cin >> t;
 
    while (t--)
    {
 
        ll m, n;
        cin >> n >> m;
        string p, q;
        cin >> p >> q;
 
        int maxi = 0;
        vector<int> p1(m), p2(m);
 
        int ff = 0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == q[ff])
            {
                p1[ff] = i;
                ff++;
            }
            if (ff == m)
            {
                break;
            }
        }
 
        ff = m - 1;
 
        for (int i = n - 1; i >= 0; i--)
        {
            if (p[i] == q[ff])
            {
                p2[ff] = i;
                ff--;
            }
            if (ff == -1)
            {
                break;
            }
        }
        for(int i=0;i<m-1;i++)
        {
            maxi = max(p2[i + 1] - p1[i], maxi);
        }
 
        cout << maxi;
 
        cout << "\n";
    }
}