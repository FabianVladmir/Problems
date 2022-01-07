#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;

        c = (a + b + c)/2;

        cout << c << endl;
    }
    return 0;
}