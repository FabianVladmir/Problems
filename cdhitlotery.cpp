#include <iostream>
using namespace std;

int main(){
    int n, cont(0);
    cin >> n;/*
    while(n > 0){
        if (n >= 100)
        {
            if (n % 100 == 0)
            {
                n/=100;
                cont = n;
                break;
            }
            else
            {
                cont++;
                n = n - (n/100) * 100;
            }            
        }
        else if (n >= 20)
        {
            if (n % 20 == 0)
            {
                n/=20;
                cont = n;
                break;
            }
            else
            {
                cont++;
                n = n - (n/20) * 20;
            }            
        }
        
        if (n >= 10)
        {
            if (n % 10 == 0)
            {
                n/=10;
                cont = n;
                break;
            }
            else
            {
                cont++;
                n = n - (n/10) * 10;
            }            
        }
        else if (n >= 5)
        {
            if (n % 5 == 0)
            {
                n/=5;
                cont = n;
                break;
            }
            else
            {
                cont++;
                n = n - (n/5) * 5;
            }            
        }
        else{
            n--;
            ++cont;
        }      
    }
    cout<<cont<< endl;*/

   

    if(n/100)
        cont+=(n/100), n-=(n/100)*100;

    if(n/20)
        cont+=(n/20), n-=(n/20)*20;

    if(n/10)
        cont+=(n/10), n-=(n/10)*10;

    if(n/5)
        cont+=(n/5), n-=(n/5)*5;

    cont+=n;

    cout<<cont << endl;
    return 0;
}

