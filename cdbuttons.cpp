#include <iostream>
using namespace std;
int factorial(int);

int main(){
    int n; cin >> n;
    cout << factorial(n) + 1 << endl;
    return 0;
}

int factorial (int a){
    int indx(1);
    if (a == 0)
    {
        return 1;
    }
    else
    {
        for (size_t i = 1; i <= a; i++)
        {
            indx = indx * i;
        }   
    }
   return indx;
}