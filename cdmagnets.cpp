#include <iostream>
using namespace std;

int main(){
    int n, cont(0);
    cin >> n;
    int fil[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> fil[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        if(fil[i] != fil[i+1]){
            cont++;
        }
    }
    cout << cont << endl;
    
    

    return 0;
}