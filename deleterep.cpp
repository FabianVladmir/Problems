#include <iostream>
using namespace std;

bool repite(char, string);
void eliminar(char, string &);

int main(){
    string num;
    getline(cin, num);
    for (size_t i = 0; i < num.size(); ++i)
    {
        if(repite(num[i], num)){
            eliminar(num[i], num);
        }
    }
    
    cout << num << endl;
    return 0;
}

bool repite(char n, string m){
    int cont(0);
    for (size_t i = 0; i < m.size(); ++i)
    {
        if (n == m[i])
        {
            cont++;
        }        
    }
    if (cont > 1)
    {
        return true;
    }
    return false;    
}

void eliminar(char n, string &m){
    for (size_t i = 0; i < m.size(); i++)
    {
        if (n == m[i])
        {
            m.erase(i,1);
            i--;
        }        
    }    
}