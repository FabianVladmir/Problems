#include <iostream>
using namespace std;

int main (){
    int num, div,mod,aux;
    cin >> num;
    if (num > 0)
    {
        cout << num << endl;
    }    
    else
    {           
        num = abs(num);
        mod = num % 10;
        num /= 10;
        div = num % 10;
        if (mod < div) {
            aux = (num / 10) * 10 + mod;
        } else {
            aux = num;
        }            
    }   
    cout << -aux << endl;
    return 0;
}