#include <iostream>
#include <math.h>
using namespace std;

int dos_cifras(int);
int main(){
    int n, total; 
    cin >> n;
    total = pow(5,n);
    cout << dos_cifras(total) << endl;
    return 0;
}
int dos_cifras(int a){
    int p(0), cont(2), poten(10);
    while (cont--)
    {
        p =p + (a % poten);
        a-=p;
        poten *=10;        
    }
    return p;
}