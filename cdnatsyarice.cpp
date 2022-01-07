#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c, d, max_gramos(0), min_gramos(0), max_pack(0), min_pack(0);
        cin >> n >> a >> b >> c >> d;
        
        max_gramos = a + b;
        min_gramos = abs(a-b);

        max_pack = c + d;
        min_pack = abs(c-d);

        if  ( ( min_pack <= (max_gramos * n) ) && (max_pack >= (max_gramos * n) ) )
        {
            cout << "Yes" << endl;
            
        }
        else if ( ( min_pack <= (min_gramos * n) ) && (max_pack >= (min_gramos * n) ) )
        {
            cout << "Yes" << endl;
            
        }else
        {
            cout << "No" << endl;
            
        }
    }

    return 0;
}