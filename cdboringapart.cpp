#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int x, digit(0), cant_digit(0), total(0);
        cin >> x;
        while (x > 10)
        {
            x = x / 10;
            cant_digit++;
        }
        // total = cant_digit * 10;
        if (cant_digit + 1 == 2)
        {
            digit = 3;
        }else if (cant_digit + 1 == 3)
        {
            digit = 6;
        }else if (cant_digit + 1 == 4)
        {
            digit = 10;
        }else
        {
            digit = 1;
        }
        total = (x-1) * 10 + (digit);
        cout << total <<  endl;
        
    }
    return 0;
}