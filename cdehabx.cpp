#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, suma(0), cont(0);
        cin >> n >> x;
        vector <int> arr(n);
        for (size_t i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
            if (arr[i] % x == 0)
            {
                cont++;
            }
            suma+=arr[i];
            
        }
        if (cont == n)
        {
            cout << -1 << endl;
        }else if (suma % x != 0)
        {
            cout << n << endl;
        }else
        {
            int minimo(0);
            int suma2 = suma;
            for (int i = 0; i < arr.size(); i++)
            {
                suma2-=arr[i];
                if (suma2 % x == 0)
                {
                    minimo = max(minimo,n-i-1);
                    break;
                }
                
            }
            suma2 = suma;
            for (int i = n-1; i >= 0; i--)
            {
                suma2-=arr[i];
                if (suma2 % x == 0)
                {
                    minimo = max(minimo,i);
                    break;
                }
                
            }            
            cout << minimo << endl;
        }
        
    }
    return 0;
}
