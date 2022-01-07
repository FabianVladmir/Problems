#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, a, b, total(0);
        cin >> x >> y >> a >> b;
        if (x > y)
        {
            swap(x,y);
        }
        total += a*(y-x);
        if (2 * a < b)
        {
            total+= x*(a * 2);
        }else
        {
            total += b*x;
        }
        cout << total << endl;
        
    }
    

    return 0;
}