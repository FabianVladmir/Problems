#include <iostream>
using namespace std;

int main(){
    long long t; cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long x = k /(n-1);

        if ((x + k) % n == 0)
        {
            cout << x + k - 1 << endl;
        }else
        {
            cout << x + k << endl;
        }        
        
    }
    return 0;
}
