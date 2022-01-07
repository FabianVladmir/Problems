#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, t, min, max;
    cin >> n >> t;
    min = pow(10,n-1);
    max = (min * 10) - 1;
    for (size_t i = min; i < max / 2; i++)
    {
        if (i % t == 0)
        {
            cout << i << endl;           
                
    }
    
    return 0;
}