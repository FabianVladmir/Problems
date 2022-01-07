#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t; 
    cin >> t;
    while (t--)
    {
        int x, y, n;
        int par(0), impar(0);
        cin >> n;
        int *array = new int [n];

        for (size_t i = 0; i < n; i++)
        {
            cin >> array[i];
            if (array[i] % 2 == 0)
            {
                par++;
            }else
            {
                impar++;
            }            
            
        }
        if (par % 2 == 0 || impar % 2 == 0)
        {
           cout << "YES" << endl;
        }
        else
        {
            int flag(0);
            sort(array, array + n);

            for (size_t i = 0; i < n; i++)
            {
                if (abs(array[i] - array[i-1]) == 1)
                {
                    //cout << "YES" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        delete array;
    }
    return 0;
}