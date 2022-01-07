#include <iostream>
#include <math.h>
int esPrimo(int);

using namespace std;
int main() {
  
  long int limite(2000000);
  long int total(0);
  long int contador(1);  
  
  for(long i = 2; i <= limite; i++){
    if(esPrimo(i)){      
      total = total + i; 
      }   
  } 
  cout << total << endl;
  return 0;  
}

int esPrimo(int p){
  int i;
  if(p < 2) 
    return 0;
  else{
    for(i=2; i <=sqrt(p); i++){
      if(p % i == 0) {return 0;}      
    }
  }
  return 1;
}
