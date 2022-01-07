#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
	string cadena;
	cin >> cadena;
	for(int i=0; i<cadena.size(); i++){
		cadena[0] = toupper(cadena[0]);
	}
	
	cout << cadena << endl;
	
	return 0;
}
