#include <iostream>
using namespace std;

int main(){

    long n; cin >> n;
    bool three(false);
    if(n % 2){three = true; n -= 3; cout << "ff\n";}
    long twos = n / 2;
    long count = twos + three;
    cout << count << endl;
    while(twos--){cout << "2 ";}
    if(three){cout << "3";}
    cout << endl;

    return 0;
}