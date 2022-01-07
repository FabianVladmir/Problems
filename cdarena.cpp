#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arrayHero[n];
        int posiblewinnrs(0);
        for (size_t i = 0; i < n; i++)
        {
            cin >> arrayHero[i];
        }

        sort(arrayHero, arrayHero+n);

        // for (size_t i = 0; i < n; i++)
        // {
        //     cout << arrayHero[i] << " ";
        // }

        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                int currenthero = arrayHero[i];
                int contwinn(0);
                
                if(i == j) continue;

                else if(currenthero > arrayHero[j]){
                    
                    ++currenthero;
                    ++contwinn;
                    if (contwinn >= 2)
                    {
                        posiblewinnrs = contwinn;
                    }
                    else{
                        posiblewinnrs = 1;
                    }                    

                }                
                
            }
            
        }
        cout << posiblewinnrs << " ";
        cout << endl;

    }
    

    return 0;
}