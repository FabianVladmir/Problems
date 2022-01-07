#include <iostream>

using namespace std;

int main(){
    long int t, n, k;
    
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n >= k*k && ( (n % 2) == (k % 2)) )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}