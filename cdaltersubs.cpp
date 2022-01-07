#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << a[0] << endl;
            continue;
        }
        int flag = 0;
        int ans = a[0];
        for (size_t i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                flag = 1;
                break;
            }
            
            ans = max(ans, a[i]);
        }
        if (flag == 0)
        {
            cout << ans << endl;
            continue;
        }
        int signo;
        ans = a[0];
        if (a[0] > 0)
        {
            signo = 1;
        }else
        {
            signo = -1;
        }
        long long int suma = 0;
        for (size_t i = 0; i < n; i++)
        {
            if ((signo == 1 && a[i] > 0 || (signo == -1 && a[i] < 0)))
            {
                ans = max(ans, a[i]);
            }
            else
            {
                suma+=ans;
                ans = a[i];
                if (signo == 1)
                {
                    signo = -1;
                }else
                {
                    signo = 1;
                }
            }
            if (i == n-1)
            {
                if ( (a[n-1] > 0 && a[n-2] > 0) || (a[n-1] < 0 && a[n-2] < 0) )
                {
                    ans = max(ans,a[i]);
                    suma+=ans;
                }else
                {   
                    suma+=a[n-1];
                }
            }
        }
        cout << suma << endl;
    }
    return 0;
}