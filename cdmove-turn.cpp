#include <iostream>
using namespace std;

int main(){

    // int t;
    // cin >> t;
    // while (t--)
    {
        int n;
        cin >> n;
        int dot(0), times(0), ans(0);

        if (n%2 == 1)
        {
            dot = 1;
            for (size_t i = 1; i <= n; i+=2)
            {
                dot++;
                times++;
            }
            
            ans = 2 * dot * times;
        }else
        {
            dot = 1;
            times = 1;
            for (size_t i = 2; i <= n; i+=2)
            {
                dot++;
                times++;
            }
            
            ans = dot * times;
            
        }
        cout << ans << endl;
    }

    return 0;
}