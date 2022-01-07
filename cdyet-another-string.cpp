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
    string s;
    cin>>s;
    int n=s.size();

    for (int i = 0; i < n; i++)
    {
      if(s[i]=='a')
      {
        s[i]='b';
      }
      else
      {
        s[i]='a';
      }

      i++;

      if (s[i] == 'z')
      {
        s[i] = 'y';
      }
      else
      {
        s[i] = 'z';
      }
    }
    cout<<s<<"\n";
  }
#ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
  return 0;
}
