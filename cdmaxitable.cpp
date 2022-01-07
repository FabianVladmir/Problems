#include <iostream>
#include <stdlib.h>
using namespace std;

typedef int* apunInt;
int main(){
    int n; cin >> n;
    apunInt *p = new apunInt [n];
    for (size_t i = 0; i < n; i++)
    {
        p[i] = new int[n];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return 0; 
    }
    
    else{
        for (size_t i = 0; i < n ; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if (i==0)
                {
                    p[i][j] = 1;
                }
                else if(j == 0 ){
                    p[i][j] = 1;
                }
                else
                {
                    p[i][j] = p[i-1][j] + p[i][j-1];
                }                
            }
        }        
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << "\n";        
    }
    
    for (size_t i = 0; i < n; i++)
    {
        delete [] p[i];
    }
    delete []p;    

    return 0;
}