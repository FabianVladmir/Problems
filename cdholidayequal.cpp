#include <iostream>
using namespace std;


int main(){
    int n, *p,cont_igual(0),minimo(0);
    cin >> n;
    p = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> p[i];
    }    
    for (size_t i = 0; i < n - 1; i++)
    {
        if (p[i] == p[i+1])
        {
            cont_igual++;
        }
        
    }
    if (cont_igual < (n/2))
    {
        for (size_t i = 0; i < n ; i++)
            if (p[i] == 0)
            {
                continue;
            }else
            {
              minimo += n - p[i];
              // cout << minimo << " ";  
            }              
    }
    else if(n < p[0]){
        minimo = 0;
    }

    else{
        minimo = p[0];
    }

    cout << minimo << endl;
    return 0;
}

