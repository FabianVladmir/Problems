#include <iostream>
using namespace std;

int main(){
    int n, m, cont;
    cin >> n >> m;    
    
    if (n > m)
    {
        cont = n - m;
    }
    while (n <= m)
    {
        if ( (n * 2) < m)
        {
            cont++;
        }
        else
        {
            cont++;
            n+=cont;
        }        
    }
    cout << cont << endl;
    return 0;
}