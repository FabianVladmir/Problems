#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

  string cad;
  cin >> cad;
  bool symbol = false;

  for (size_t i = 0; i < cad.size(); i++)
  {
      if (isdigit(cad[i]) || cad[i] == '+' || cad[i] == '-' || cad[i] == '.' )
      {
          if ((cad[i] == '-' && cad[i+1] == '.') || (cad[i] == '+' && cad[i+1] == '.'))
          {
              cout << "Cadena valida\n";
             symbol = true;
             break;
              
          }

          else if(isalpha(cad[i])){
              cout << "Cadena no valida\n";
              break;
          }
          else if (cad[i] == cad[i+1] && !isdigit(cad[i]))
          {
             cout << "Cadena no valida\n";
             symbol = true;
             break;
          }
          else if(symbol){
              cout << "Cadena no valida\n";
              break;
          }
          

      }else{
          cout << "Cadena no valida\n";
      }

  }
  if (!symbol)
  {
      cout << "Cadena valida\n";
  }
  

  return 0;
}