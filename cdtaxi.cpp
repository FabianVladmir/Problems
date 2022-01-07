#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int *p, cantidad;
	int total=0, resultado;
	cin >> cantidad;
	p = new int[cantidad];
	for(int i=0; i<cantidad; i++){
		cin >> p[i];
		total = total + p[i];
	}
	resultado = total/4;
	if(total % 4 == 0){
		cout << resultado << endl;
	}
	else{
		cout << resultado + 1 << endl;
	}
	
	delete[] p;
	
	return 0;
}
