#include <iostream>
using namespace std;

typedef char *apuntChar;
int main(){
    int n, m; cin >> n >> m;
    bool color(true);
    apuntChar *f = new char *[n];
    for (size_t i = 0; i < n; i++)
    {
       f[i] = new char [m];
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> f[i][j];
        }        
    }
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (f[i][j] == 'W' || f[i][j] == 'B' || f[i][j] == 'G')
            {
                color = false;               
            }           
        }        
    }
    if (color)
    {
        cout << "Color" << endl;
    }
    else
    {
        cout << "Black&White" << endl;
    }
    for (size_t i = 0; i < n; i++)
    {
        delete []f[i];
    }

    delete [] f;
    
    return 0;
}