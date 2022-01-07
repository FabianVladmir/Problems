#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int lon;
    string cad;
    char m = 'A';
    cin >> lon;
    cin >> cad;
    for (size_t i = 0; i < cad.size(); i++)
    {
        cad[i] = toupper(cad[i]);
    }
    if(lon >= 26){
        for (size_t i = 0; i < cad.size(); i++)
        {
            if(cad.find(m) != -1){
                m++;
            }
        }        
    }
    else
    {
        cout << "NO";        
    }
    if (m >= 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
       
    return 0;
}