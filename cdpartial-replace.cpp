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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
 
        int p1=-1;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='*')
            {
                p1=i;
                s[i] = 'X';
                break;
            }
        }
        int p2 = -1;
        for (int i = n-1; i >=0; i--)
        {
            if (s[i] == '*' || s[i]=='X')
            {
                p2 = i;
                s[i] = 'X';
                break;
            }
        }
        //cout<<p1<<" "<<p2<<" "<<s<<" ff\n";
        if(p1==p2)
        {
            cout<<1<<"\n";
            continue;
        }
 
        int ans=2;
 
        int l=p1;
        
 
        for (int i = p1; i < p2 && l<p2; i++)
        {
            int r = l + k;
            //cout<<r<<" r\n";
            while(r>l)
            {
                if(r>p2 || s[r]=='X')
                {
                    break;
                }
                if(s[r]=='*')
                {
                    ans++;
                    l=r;
                    s[r]='X';
                    break;
                }
                r--;
            }
            //cout<<s<<"\n";
        }
        cout<<ans<<"\n";
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}


// SECOND SOLUTION

// APROCH
// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//   int n, k;
//   cin >> n >> k;
//   string s;
//   cin >> s;
//   int res = 1;
//   int i = s.find_first_of('*');
//   while (true) {
//     int j = min(n - 1, i + k);
//     for (; i < j && s[j] == '.'; j--) {}
//     if (i == j) {
//       break;
//     }
//     res++;
//     i = j;
//   }
//   cout << res << "\n";
// }

// int main() {
//   int tests;
//   cin >> tests;
//   while (tests-- > 0) {
//     solve();
//   }
//   return 0;
// }