#include <iostream>

using namespace std;

int main(){
    int total(0), d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    if ((d1) + (d2) < d3)
    {
        total += d1*2 + d2*2;
    }else if ((d2) + (d3) < d1)
    {
        total += d2*2 + d3*2;
    }else if ((d1) + (d3) < d2)
    {
        total += d1*2 + d3*2;
    }
    else
    {
        total += d1 + d2 + d3;
    }
    cout << total << endl;    

    return 0;
}