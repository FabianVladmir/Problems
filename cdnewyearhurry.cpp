#include <iostream>
using namespace std;

int main(){
    int n, k,total(0),cont(1),p(0);
    cin >> n >> k;
    for (size_t i = 1; i <= n; i++)
    {
        p = p + (i * 5);
        total = p + k;

        if (total <= 240)
        {            
            p = p + (i * 5);
            total = p + k;
            // cout << total << " ";
            cont++;            
        }
        else
        {
            break;
        }
        
        
    }
    
    cout << cont  << endl;
    return 0;
}