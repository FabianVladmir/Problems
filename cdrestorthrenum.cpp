#include <iostream>
using namespace std;

int main(){
    int arr[4], maximo(0), aux(0);
    for (size_t i = 0; i < 4; i++)
    {
        cin >> arr[i];    
    }
    for (size_t i = 0; i < 3; i++)
    {        
        maximo = max(arr[i], arr[i+1]);
        if (aux < maximo)
        {
            aux = maximo;            
        }
        
    }
    for (size_t i = 0; i < 4; i++)
    {
        if (aux == arr[i])
        {
            continue;
        }
        else
        {            
            cout << aux - arr[i] << " ";
        }        
        
    }
    return 0;  

}