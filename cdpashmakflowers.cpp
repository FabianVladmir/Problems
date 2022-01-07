#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long int max_dif(0), n, min(0), max(0), max_num(0);
    cin >> n;
    int *a = new int [n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);

    if (a[0] == a[n-1])
    {
        if(n%2 == 0)
        {
            max_num = (n/2 * (n-1));
        }
        else{
            max_num = n/2 * n;
        }
    }
    else
    {
        for (size_t i = 0; i < n; i++)
        {
            if (a[i] == a[0])
            {
                min++;
            }
            if (a[i] == a[n-1])
            {
                max++;
            }
            max_num = min * max;
        }
        
    }

    max_dif = a[n-1] - a[0];
    cout << max_dif << " " << max_num << endl; 

    delete a;
    return 0;
}