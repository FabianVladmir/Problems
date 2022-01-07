#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,l;
    set<int>s;
    cin>>n>>m;
    int a[n+10],b[n+10];
    for(i=1;i<n+1;i++){
        cin>>a[i];
    }
    for(i=n;i>=1;i--){
        s.insert(a[i]);
        b[i]=s.size();
        cout << b[i] << " ";
    }
    for(i=0;i<m;i++){
        cin>>l;
        cout<<b[l]<<endl;
    }
    return 0;
}