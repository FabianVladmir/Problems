#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
    int total(0), resta, indx(97);
    string cad;
    getline(cin, cad);
    for (size_t i = 0; i < cad.size(); i++)
    {
        resta = abs (indx- cad[i]);
        if (resta > 13)
        {
            resta = 26 - resta;
        }
        total += resta;
        indx = cad[i];
    }
    cout << total << endl;
    return 0;
}