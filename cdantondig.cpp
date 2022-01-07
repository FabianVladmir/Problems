#include <iostream>
using namespace std;

int main(){
    int k2, k3, k5, k6, total(0), min1(0), min2(0);
    cin >> k2 >> k3 >> k5 >> k6;
    min1 = min(k2, min(k5, k6));
    k2-=min1;
    total = total + (256 * min1);
    min2 = min(k2, k3);
    total = total + (32 * min2);
    cout << total << endl;
    return 0;
}