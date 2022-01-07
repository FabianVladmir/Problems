#include <iostream>
using namespace std;
int main(){
    int t,x,n,m;
    cin >> t;
    while(t--){
        cin >> x >> n >> m;
        while(x>20&&n){
            n--,x=x/2+10;}
        while(x>0&&m){m--,x-=10;}
        if(x>0){
            cout << "NO\n";
        } 
        else {
            cout << "YES\n";
        }
    return 0;
}