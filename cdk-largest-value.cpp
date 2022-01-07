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
 
   int n,q;
   cin>>n>>q;
 
   int a[n];
    int zero=0,one=0;
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
       if(a[i]==0)
       {
           zero++;
       }
       else
       {
           one++;
       }
   }
 
   for (int i = 0; i < q; i++)
   {
       int t,k;
 
       cin>>t>>k;
 
       if(t==1)
       {
           a[k-1]=1-a[k-1];
           if(a[k-1]==0)
           {
               zero++;
               one--;
           }
           else
           {
               zero--;
               one++;
           }
       }
       else
       {
           if(k<=one)
           {
               cout<<1<<"\n";
           }
           else
           {
               cout<<0<<"\n";
           }
       }
   }
   
   
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}