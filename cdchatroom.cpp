#include <iostream>

using namespace std;

int main(){
	string cadena;
	string cad1 = "hello";
	cin >> cadena;
	int cont = 0;
	for (int i=0; i<cadena.size(); i++){
		if(cont < cad1.size() && cadena[i] == cad1[cont]){
			cont ++;
		}
	}
	if(cad1.size() == cont){
		cout << "YES" << endl;
	}
	else{
		cout << "NO "<< endl;
	}
	
	return 0;
}
