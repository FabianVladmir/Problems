#include <iostream>
using namespace std;

int main(){
    int t, w, numer, denom(6);
    cin >> t >> w;
    t = max(t,w);
    numer = 6-(t-1);
    if (denom % numer == 0)
    {
        denom = 6 / numer;
        numer = numer / numer;
        cout << numer << "/" << denom << endl;
    }
    else if ((denom % 2 == 0) && (numer % 2 == 0))
    {
        denom = denom/2;
        numer = numer/2;
        cout << numer << "/" << denom << endl;
    }
    
    else
    {
        cout << numer <<"/" << denom << endl;
    }

    return 0;
}