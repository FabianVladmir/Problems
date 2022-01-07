#include <iostream>
using namespace std;
int mcd(int, int);
int mcm(int, int);

int main(){
    int a,b;
    cin >> a >> b;
    cout << mcd(a,b) <<endl;
    cout << mcm(a,b) << endl;

    return 0;
}

int mcd(int m, int n){
    int p(1);
    for (int i = 1; i <= m; i++)
    {
        if((m % i == 0) && (n % i == 0)){
            p = i;
        }
    }
    return p;
}

int mcm(int p, int q){
    int max, s;
    if(p < q){
        max = q;
    }
    else{
        max = p;
    }
    s= max;
    while ((s % p !=0) || (s % q != 0))
    {
        s+=1;
    }
    
    return s;
    
}