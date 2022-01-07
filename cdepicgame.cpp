#include <iostream>
using namespace std;

int mcd(int, int);
int main(){
    int a, b, n, total(0);
    cin >> a >> b >> n;
    while (n >= 0)
    {
        total = mcd(a,n);
        n-=total;
    }
    
    return 0;
}

int mcd(int p, int q){
    int min, p(1);
    if (p < q)
    {
        min = p;
    }else
    {
        min = q;
    }
    for (size_t i = 0; i < min; i++)
    {
        if ((p % i == 0) && (q % i == 0))
        {
            p = i;
        }        
    }
    return p;
}