#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n, sum_total(0), contador(0);
        
        cin >> a >> b >> n;
        
        //sum_total = max(a,b);
        while (sum_total <= n)
        {
            sum_total= a + b ;             
            
            if (b > a)
            {
                a+=b;
                sum_total=a;
                contador++;
            }else
            {
                b+=a;
                sum_total=b;
                contador++;
            }
            
            //cout << a << " " << b << endl;
            if (sum_total > n)
            {
                break;
            }                        
            
        }

        cout << contador << endl;
    }
    return 0;
}