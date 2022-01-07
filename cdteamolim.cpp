#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, *p, a, b, c, minimo(0), t1[20], t2[20], t3[20], x(0) , y(0) ,z(0);
    cin >> n;
    p = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        a = count(p, p+n, 1);
        b = count(p, p+n, 2);
        c = count(p, p+n, 3);
        minimo = min((a,b),c);
    }
    cout << minimo << endl;
    if (minimo > 0)
    {
        
        for (size_t i = 0; i < n; i++)
        {
            if (p[i] == 1)
            {
                t1[x] = i + 1;
                x++;
            }
            else if(p[i] == 2){
                t2[y] = i + 1;
                y++;
            }
            else if (p[i] == 3){
                t3[z] = i + 1;
                z++;
            }            
        }
        for ( x=0, y= 0, z = 0;  z < minimo; x++, y++, z++)
        {
           cout << t1[x] << t2[y] << t3[y] << endl;
           
        }    
    }
    
    return 0;
}