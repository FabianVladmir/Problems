#include <iostream>
#include <math.h>
using namespace std;

int main() {                                
  int n, s(1), p(2); cin >> n;
  while(n--){
    int  i(1);
    for( i=1; i<=s; i++){
      if(s % i == 0){
        cout << i << " ";
      }
      
    }
    s+=p;
    ++p;    
    cout << endl;
  } 
  return 0;
}