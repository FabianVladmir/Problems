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
        cin >> n;
 
        int a[n];
        int pos[n+1] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i;
        }
 
        ll start = 0;
        ll end = n;
 
        for (int i = n; i > 0; i--)
        {
            start = pos[i];
            if (end > start)
            {
                for (int j = start; j < end; j++)
                {
                    cout << a[j] << " ";
                }
                end = start;
            }
        }
 
        cout << "\n";
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}