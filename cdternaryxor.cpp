#include <iostream>
using namespace std;
void imprimir(int [], int);

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string x;
        cin >> x;
        bool band(false);
        int a[n];
        int b[n];
        for (size_t i = 0; i < n; i++)
        {
            a[i] = 0;
            b[i] = 0;
        }
        

        for (size_t i = 0; i < n; i++)
        {
            if (x[i] == '0')
            {
                a[i] = 0;
                b[i] = 0;
            }else if (x[i] == '1')
            {
                if (band)
                {
                    a[i] = 0;
                    b[i] = 1;
                }else
                {
                    a[i] = 1;
                    b[i] = 0;
                    band = true;
                }
            }else
            {
                if (band)
                {
                    a[i] = 0;
                    b[i] = 2;
                }else
                {
                    a[i] = 1;
                    b[i] = 1;
                }
            }
        }
        imprimir(a,n);
        imprimir(b,n);        
    }
    return 0;
}

void imprimir(int m[], int size){
    for (size_t i = 0; i < size; i++)
    {
        cout << m[i];
    }
    cout << endl;
}