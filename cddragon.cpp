#include <iostream>
using namespace std;

int main(){
    int s,n;
    bool band = false;
    cin >> s >> n;
    while (n--)
    {
        int p,q;
        cin >> p >> q;
        if (s > p){
            s+=q;
            band = true;
        }
        else
        {
            break;
        }        
    }
    if(band){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}