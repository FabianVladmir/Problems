#include <iostream>
#include <map>
using namespace std;

int main(){
    map <string, string> mp;
    int n, m;
    string cad1, cad2;
    cin >> n >> m;
    while (m--)
    {
        cin >> cad1 >> cad2;
        if (cad1.size() > cad2.size())
        {
            mp[cad1] = cad2;
        }else
        {
            mp[cad1] = cad1;
        }        
    }
    while (n--)
    {
        cin >> cad1;
        cout << mp[cad1] << " ";
    }
    cout << endl;
    return 0;
}