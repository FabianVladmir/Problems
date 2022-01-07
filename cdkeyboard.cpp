#include <iostream>
using namespace std;

int main(){
    string manual = "qwertyuiopasdfghjkl;zxcvbnm,./ ";
    char car;
    int aux, ind(0);
    string cadena;
    cin >> car;
    cin >> cadena;
    for (size_t i = 0; i < cadena.size(); i++)
    {
        while (cadena[i] != manual[ind])
        {
            ind++;
            aux = ind;            
        }
        ind = 0;
        // cout << aux << " ";
        
        cout << manual[aux-1];
    }
    

    return 0;
}