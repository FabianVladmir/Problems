#include <iostream>
using namespace std;
int mcd(int, int);

int main(){
    int n, m, total, cont(0);
    cin >> n >> m;
    if (m > n)
    {
        cout << - 1 << endl;
        return 0;
    }
    while (n > 0)
    {
        if (n == m)
        {
            n--;
            cont++;    
        }
        else
        {
            total = mcd(n,m);
            n-=total;            
            cont++;
        }
    }
    cout << cont << endl;
    return 0;
}

int mcd(int a, int b){
    int p(1), menor;
    if (a < b)
    {
        menor = b;
    }
    else
    {
        menor = a;
    }
    for (size_t i = 1; i <= menor; i++)
    {
        if ((a%i == 0) && (b%i == 0))
        {
            p = i;
        }        
    }
    return p;
}