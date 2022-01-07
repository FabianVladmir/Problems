#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >>n >> m;
    int total(0);
    total = n * m;
    if(total % 2 == 0){
        cout << "Malvika" << endl;
    }
    else
    {
        cout << "Akshat" << endl;
    }
    

    return 0;
}