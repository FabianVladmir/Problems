#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n, *m, t, cont(0);
    cin >> n >> t;
    m = new int [n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        if(m[i] > t){
            cont+=2;
        }
        else
        {
            cont++;
        }
        
    }
    cout << cont << endl;
    
    return 0;
}