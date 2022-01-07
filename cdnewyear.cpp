#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n, *p, t;
    cin >> n >> t;
    p = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for  ( int i=0; i<n; )
        {
            i=i+p[i];
            if ( i==(t-1) ) { cout<<"YES"<<endl; return 0;}
        }
    cout << "NO" <<endl;
    

    return 0;
}