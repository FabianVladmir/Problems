#include <iostream>
using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (a < m  && a < b)
    {
        cout << a * n;
    }
    else
    {
        int total(0);
        total = n - (m * 2);
        cout << (m * b) + (total * a);        
    }
    

    return 0;
}