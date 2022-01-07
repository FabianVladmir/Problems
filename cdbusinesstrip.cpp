#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> meses;
    int k, index, cont(0), aux(0), maximo, n;
    cin >> k;
    for (size_t i = 0; i < 12; i++)
    {
        cin >> n;
        meses.push_back(n);
    }
    while (k > 0)
    {
        for (size_t i = 0; i < meses.size() - 1; i++)
        {
            maximo = max(meses[i], meses[i+1]);            
           if (maximo > aux)
           {
               aux = maximo;
               index = i + 1;
           }
           
        }        
        meses.erase (meses.begin()+ index);
        cout << aux << " "; 
        k -= aux;
        aux = 0;
        cont++;
    }
    cout << cont << endl;
    
    return 0;
}