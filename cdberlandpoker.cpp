#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, total_points(0);
        cin >> n >> m >> k;
        if ((n/k) >= m)
        {
            total_points = m;
        }

        else{
            // distribuir el resto
            int aux = ceil(1.0 * (m - (n/k))/ (k-1));
            total_points = (n/k) - aux;

        }
        
        cout << total_points << endl;
    }
    


    return 0;
}