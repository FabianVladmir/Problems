#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin>>n;
        int a[n];
        
        int c[3]={0};
        int b=n/3;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c[a[i]%3]++;
        } 
        
        int ans=0;
 
        for (int i = 0; i < 2; i++)
        {
 
            //cout << c[0] << " " << c[1] << " " << c[2] << " \n";
 
            if (c[0] > b)
            {
                ans += c[0] - b;
                
                c[1] += c[0] - b;
                c[0] = b;
            }
 
            if (c[1] > b)
            {
                ans += c[1] - b;
                
                c[2] += c[1] - b;
                c[1] = b;
            }
    
            if (c[2] > b)
            {
                ans += c[2] - b;
                c[0] += c[2] - b;
                c[2] = b;
            }
        }
 
        cout<<ans<<"\n";

    }
    return 0;
}