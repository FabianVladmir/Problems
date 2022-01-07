#include <iostream>
using namespace std;

int main(){
	string cadena;
	cin >> cadena;
	
	if(cadena[0] == 'H'){
		cout << "YES" << endl;
	}
	else if(cadena[0] == 'Q'){
		cout << cadena << endl;
	}
	else if(cadena[0] == '9'){
		cout << "99 Bottles of Beer" << endl;
	}
	else if(cadena[0] == '+'){
		cout << "YES" << endl;
	}
	else{
		cout << "No tiene soporte" << endl;
	}
	
	return 0;
}

