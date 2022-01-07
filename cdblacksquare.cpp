#include <iostream>
using namespace std;

int main(){
    int filas[4], aux, total(0);
    string cadena;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> filas[i];
    }
    cin >> cadena;
    for (size_t i = 0; i < cadena.size(); i++)
    {
        aux = cadena[i];
        //cout << aux << " ";
        // cout << filas[aux - 49]<< " ";
        total += filas[aux - 49];
    }
    
    cout << total << endl;
    return 0;
}