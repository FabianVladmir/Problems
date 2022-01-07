#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    while (n--)
    {
        int p,cont(0); cin >> p;
        for (size_t i = 1; i <= p; i++)
        {
           if (p % i == 0)
           {
               cont++;
           }           
        }
        if (cont == 3)
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