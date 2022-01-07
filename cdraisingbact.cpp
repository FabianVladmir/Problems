#include <iostream>
using namespace std;

int main(){
    int x, cont(0); 
    cin >> x;
    if (x % 2 == 0)
    {
        cont++;
    }
    else
    {
        int aux;
        aux = 1;
        while(x - aux > 1){
            aux = aux * 2;
            cont++;
        }        
    }
    cout << cont << endl;    
    return 0;
}