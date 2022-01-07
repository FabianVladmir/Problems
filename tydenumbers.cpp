#include <iostream>
using namespace std;

int ultimo_numero(int);
bool esMenor (int);
int main(){
    int test;
    cin >> test;
    int number;
    while (test--)
    {        
        cin >> number;
        if (esMenor(number))
        {
            cout << number << endl;
        }else
        {
            cout << ultimo_numero(number) << endl;
        }   
        
    }    
    return 0;
}

bool esMenor (int a){
    int resto = 9;
    while (a > 0)
    {
        if (a % 10 <= resto)
        {
            resto = a % 10;
            a /=10;
        }
        else
        {
            return false;
        }        
    }
    return true;    
}

int ultimo_numero(int num){
    int residuo = (num % 10) + 1;
    num-= residuo;
    residuo = 10;
    while (!esMenor(num))
    {
        if (num %( residuo * 10) == (residuo * 10) -1)
        {
            residuo *= 10;
        }
        num -= residuo;
    }
    return num;
}