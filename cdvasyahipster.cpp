#include <iostream>
using namespace std;

int main(){
    int a, b, d;
    cin >> a >> b;
    d = max(a,b) - min(a,b);
    cout << min(a,b) << endl;
    cout << d / 2 << endl;
    return 0;
}