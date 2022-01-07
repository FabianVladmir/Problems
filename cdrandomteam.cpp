#include <iostream>
using namespace std;

int main(){
    long long n, m, tmin, tmax, x;
    cin >> n >> m;
    tmax = (n-m+1) * (n-m)/2;
    if (n % m == 0)
    {
        x = n/m;
        tmin = (x * (x-1) /2) *m;
                
    }
    else
    {
        x = n/m;
        tmin = (x*(x-1)/2) * (m-(n%m));
        tmin+= ((x+1)*x)/2 * (n%m);
    }
    
    cout << tmin << " " << tmax << endl;
    

    return 0;
}