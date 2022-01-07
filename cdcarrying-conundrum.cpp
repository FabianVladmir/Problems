#include <bits/stdc++.h>
using namespace std;
bool perfec_cube(int n){

  int it = cbrt(n);
  if(n == (it*it*it))
    return 1;
  else
    return 0;

}

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int temp;
        cin >> n;
        temp = n;
        if(n % 10 == 0)
            cout <<  (int)sqrt(n)-1 << endl;

        else if(perfec_cube(temp)){
            
            cout << (int)n-1 << endl;}
        else{
            if(n % 2 == 0)
                cout << (int)sqrt(n) + 1 << endl;
            else
                cout << (int)sqrt(n) << endl;
        }
    }
    




    return 0;
}