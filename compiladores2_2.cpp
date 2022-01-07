#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {   
		
		int finalizar = 3;
		int estado = 1;		
		char cad;
		
		while(cad != finalizar)
		{
			
			cin >> cad;
			
			if (isdigit(cad))
			{
				estado = 2;
				cout<<"La cadena es incorrecta";
				break;
			}
			if (isalpha(cad))
			{
				estado=3;
			}

			if(estado == 3){
				if (isdigit(cad) || isalpha(cad))
				{
					estado = 3;
				}
				break;
			}	

		}
		cout<<"La cadena es correcta";
	
  }