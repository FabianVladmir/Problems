#include <iostream>
using namespace std;

typedef int *apuntInt;
int main(){
    int n, t, cont(0), aux(0);
    cin >> n >> t;
    apuntInt *m = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        m[i] = new int[n];
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
           if (i==0)
           {
               m[0][j] = j+1;
           }else if(j == 0 && i > 0){
               m[i][0] = i+1;
           }           
           else
           {
              aux = m[i][0];
              m[i][j] = aux * m[0][j];
           }
        }        
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << m[i][j] << " ";
            if (m[i][j] == t)
            {
                cont++;
            }            
        }
       cout << endl; 
    }
    cout << cont << endl;

    for (size_t i = 0; i < n; i++)
    {
        delete [] m[i];
    }
    delete [] m;
    return 0;
}