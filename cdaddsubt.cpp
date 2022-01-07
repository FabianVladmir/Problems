#include <iostream>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    while (t--)
    {
        int cont(0);
        cin >> a >> b;
        while (a != b)
        {
            if ( (a/2) + 1 >= b )
            {
                if (a%b == 0)
                {
                    cout << 1 << endl;
                    return 0;
                }
                
                a = a - b;
                cont++;
            }else
            {
                a++;
                cont++;
            }
        }
        cout << cont << endl;
    }
    return 0;
}