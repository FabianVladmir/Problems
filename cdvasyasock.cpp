#include <iostream>
using namespace std;

int main(){
    int n,m, i, o(1);
    cin >> n >> m;
    i=m;
    while (i <= n)  
    {
        ++o;        
        i = o * m;
        
        n++;
    }
    
    cout << n << endl;

    return 0;
}