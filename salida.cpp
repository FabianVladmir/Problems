#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int tamanio = 10;
	int *a;
	a = new int [tamanio];
	for (int i = 0; i < tamanio; i++){
		a[i] = i;
	}
	while (*a < 9){
		a++;
		cout << *a << " ";
	}
	cout << endl;
	
	
	return 0;
}
