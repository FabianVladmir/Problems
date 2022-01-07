#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int *p, cantidad;
	cin >> cantidad;
	int total=0, resultado=0;
	p = new int[cantidad];
	for (int i=0; i<cantidad; i++){
		cin >> p[i];
		total = total + p[i];
	}
	for(int i=0; i<cantidad; i++){
		resultado = resultado + p[i];
		if(total % 2 < resultado){
			cout << i + 2 << endl;
			break;
		}
		else{
			cout << cantidad << endl;
		}
	}
	
	delete[] p;
	
	return 0;
}
