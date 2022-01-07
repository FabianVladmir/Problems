#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, total(0),p(0), band(0);
        cin >> n;
        vector <int> vect (n);
        for (size_t i = 0; i < n/2; i++)
        {
            vect[i] = 2 * (i + 1);
            total+=vect[i];
        }
        for (size_t i = n/2; i < n; i++)
        {
            if (i == n - 1)
            {
                if (total % 2 != 0)
                {
                     vect[i] = total;
                    band = 1;
                }
                
            }else
            {
                vect[i] = (2*p) + 1;
                p++;
                total -= vect[i];
            } 
        }
        if (band)
        {
            cout << "YES\n";
            for (size_t i = 0; i < n; i++)
            {
                cout << vect[i] << " ";
            }            
        }
        else
        {
            cout << "NO\n";
        }
    } 
    return 0;
}