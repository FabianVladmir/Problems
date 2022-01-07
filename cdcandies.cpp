#include <iostream>
#include <math.h>
using namespace std;
int es_primo(int);

int main(){
    int t;
    
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (size_t i = 2; i < 1e8; i++)
        {
            int pivot = pow(2,i);
            --pivot;
            if (n % pivot == 0)
            {
                cout << n/pivot << endl;
                break;
            }
            
        }
           
    } 
    return 0;
}

