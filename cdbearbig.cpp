#include <iostream>
using namespace std;

int main(){
    int luck, bear, cont=0;
    cin >> luck >> bear;
    while(luck <= bear){
        luck = luck * 3;
        bear = bear * 2;
        cont++;
    }
    cout << cont << endl;

    return 0;
}