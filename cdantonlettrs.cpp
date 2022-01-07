#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    string cad;
    getline(cin, cad);
    int cont(0), le;
    le = cad.size()
    sort(cad,cad+le);
    for(int i=0; i<cad.size(); i++)
    {
        if(cad[i]>=97 && cad[i]<=122)
        {
            cont++;
            if(cad[i]==cad[i+1])
                cont--;
        }
    }
    cout << cont << endl;
    return 0;
}