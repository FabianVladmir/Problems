#include <iostream>
#include <math.h>
int esPrimo(int);

using namespace std;
int main() {
  
  long int limite(10001);
  long int mayor(0);
  long int contador(1);  
  /* int n; */
  
  for(long i = 2; contador <= limite; i++){
    if(esPrimo(i)){      
      mayor = i;
      
      contador++; 
      }   
  } 
  cout << mayor << endl;
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
