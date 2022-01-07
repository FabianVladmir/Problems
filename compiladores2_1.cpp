#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

  map<int,int> mp;
  mp.insert(pair<int, int>(0,0));
  string palabra[3][3];
  palabra[0][0]="2";
  palabra[0][1]="3";
  palabra[0][2]="error";
  palabra[1][0]="error";
  palabra[1][1]="error";
  palabra[1][2]="error";
  palabra[2][0]="3";
  palabra[2][1]="3";
  palabra[2][2]="aceptar";
  string cadena;
  cin>>cadena;
  string estado="1";
  int estado1=0;
  int iterator=0;
  int entrada=0;
  char simbolo=cadena[iterator];
  do{
    iterator++;
    if(isdigit(simbolo)){
      entrada=0;estado1=1;
    }
    else if(isalpha(simbolo)){
      entrada=1;estado1=2;
    }
    else if(cadena.size()==0)
    {
      entrada=2;estado1=0;
    }
    else{
      estado="error";break;
    }
    estado=palabra[estado1][entrada];
    if(estado=="error")
      break;

  }while(estado=="aceptar");
  cout<<estado;
  return 0;
}