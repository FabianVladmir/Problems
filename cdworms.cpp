#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int long long n, m;
    cin >> n;
    int long long a[n], c[n];
    int sumarray(0);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        sumarray+=a[i];
        c[i] = sumarray;
    }
    cin >> m;
    int long long q[m];
    for (size_t i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    for (size_t i = 0; i < m; i++)
    {
        cout << lower_bound(c, c+n, q[i]) - c+1 << endl;
    }

    return 0;
}