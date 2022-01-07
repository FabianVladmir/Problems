#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        long long int p, a, b, c;
        cin >> p >> a >> b >> c;
        long long int A, B, C;
        A = a - p % a;
        //cout<<A<<" d\n";
        if (A == a)
        {
            A = 0;
        }
        B = b - p % b;
        //cout << B << " d\n";
        if (B == b)
        {
            B = 0;
        }
        C = c - p % c;
        //cout << C << " d\n";
        if (C == c)
        {
            C = 0;
        }
        long long int ans = min(A,B);
        //cout << ans << " s\n";
        ans= min (ans,C);
        //cout << ans << " s\n";
        cout <<ans << "\n";

    }
    


    return 0;
}