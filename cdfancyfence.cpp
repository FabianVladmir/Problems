#include <iostream>
using namespace std;

int main(){
    int n, angulo; 
    cin >> n;
    
    for (size_t i = 3; i <= 20; i++)
    {
        angulo = ((i - 2) * 180) / i;
        if (n == angulo)
        {
            cout << "YES" << endl;
        }
        else{
            continue;
        }
        
    }
    
    return 0;
}