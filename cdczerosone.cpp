#include <iostream>
#include <string>
using namespace std;

int main () {
    string cad;

    int a, b, c=0, d=0, e;
    cin >> a;
    cin >> cad;
    for (size_t i = 0; i < a; i++)
    {
        if (cad[i] == '1')
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if (c > d)
    {
        cout << c - d << endl;
    }else
    {
        cout << d - c << endl;
    }    
    return 0;
}