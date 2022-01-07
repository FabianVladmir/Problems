#include <iostream>
#include <math.h>
using namespace  std;


int main() {
  int max(0);
  int static limit = 1000;
  for(int a=3; a<limit; a++){
    for(int b=a+1; b<limit-1; b++){
      double n = pow(a, 2) + pow(b, 2);
      n = sqrt(n);

      if((a+b+n) == limit){
        cout << a << " " << b << " " << n << endl; 
        max= a * b *n;
        break;
      }
    }
  }
  cout << max << endl;
  return 0;
}
