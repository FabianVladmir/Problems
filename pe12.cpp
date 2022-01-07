#include <iostream>
#include <math.h>
using namespace std;

int main() {                                
  int s(1), p(2), div(0); 
  // cin >> n;
  while(p--){
    int  i(1);
    for( i=1; i<=s; i++){
      if(s % i == 0){
        div++;  
        // cout << i << " ";
      }
    }
    if(div == 6){
      cout << s << endl;
    }
    s+=p;
    ++p;    
    div = 0;    
    //cout << endl;
  } 
  return 0;
}