#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    int inicio, final, mid;
    string str;
    for (size_t i = 0; i < t; i++)
    {
        cin >> a >> b;
        inicio = a;
        final = b;
        while (inicio <= final)
        {
            mid = (inicio + final)/2;
            cout << mid << endl;
            fflush(stdout);
            cin >> str;
            if (str == "CORRECT")
            {
                break;
            }else if(str == "WRONG_ANSWER"){
                return 0;
            }else if(str == "TOO_SMALL"){
                inicio = mid + 1;
            }else if(str == "TOO_BIG"){
                final = mid;
            }
        }        
    }
    return 0;
}