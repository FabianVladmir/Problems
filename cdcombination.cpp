#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, total(0), step; cin >> n;
    string cad, cad2; 
    cin >> cad;
    cin >> cad2;
    for (size_t i = 0; i < cad.size(); i++)
    {   
        step = abs(cad[i] - cad2[i]);
        if (step >= 5)
        {
            total+= 10 - step;
        }else
        {
            total+= step;
        }
    }
    cout << total << endl;
    return 0;
}