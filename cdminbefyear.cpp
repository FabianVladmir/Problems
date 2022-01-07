#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int h, m, total(0);
        cin >> h >> m;

        if ((23 - h) >= 1)
        {
            total = (23 - h) * 60;
        }

        total += (60 - m);        
        
        cout << total << endl;
    }    

    return 0;
}