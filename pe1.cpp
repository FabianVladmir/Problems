#include <iostream>
using namespace std;

int main(){
    int total(0);
    int limite;
    cin >> limite;
    for (size_t i = 0; i < limite; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            total+=i;
        }        
    }    
    cout << total << endl;
    return 0;
}