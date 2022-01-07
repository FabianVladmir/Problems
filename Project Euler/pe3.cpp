#include <iostream>
using namespace std;

int main(){
    long int i(2), limite = 600851475143;
    
    for (size_t i = 0; i < limite; i++)
    {
        while (limite % i == 0)
        {
            limite = limite / i;
        }
    }
    cout << i << endl;
    return 0;
}