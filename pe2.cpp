#include <iostream>
using namespace std;

int main(){
    int a(1), b(2), suma(0), limite(4000000);
    while (b <= limite)
    {
        cout  << b << " ";
        b = b + a;
        a = b - a;
        if (b % 2 == 0)
        {
            suma+=b;
        }
        
    }
    cout << suma << endl;

    return 0;
}