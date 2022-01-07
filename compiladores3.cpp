#include <bits/stdc++.h>
using namespace std;

int main(){
	 {
		string input = {"letra","digito"};
		int inicio = 1;
		int finalizar = 3;
		int estado = inicio;

		bool fin = false;

		int it = 0;

        cin >> input;

        
		while(!fin)
		{
			if(it > input.size()-1)
			{
				fin = true;
				break;
			}
			if(estado==1)
			{
				if(isalpha(input[it]))
				{
					estado=3;
				}
				if(isdigit(input[it]))
				{
					estado=2;
                  fin=true;
                  break;
				}
				it++;
				continue;
			}
			if(estado==3)
			{
				if(isalpha(input[it]))
				{
					estado=3;
				}
				if(isdigit(input[it]))
				{
					estado=3;
				}
				it++;
				continue;
			}
		}

		if(estado==finalizar)
		{
			cout << "estado aceptado";
		}
		else
		{
			cout << "estado incorrecto";
		}

	}

    return 0;
}
