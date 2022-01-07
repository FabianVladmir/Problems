#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x == 1 || x == 2)
    {
        cout << "yes\n";
    }else if( (x/2) % 2 == 0){
        cout << "yes\n";
    }else
    {
        cout << "no\n";
    }
    return 0;
}