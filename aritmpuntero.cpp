#include <iostream>
using namespace std;

int main(){
	const int tamanio = 5;
		
	int arreglo[tamanio] = {1, 4, 9 ,2, 5};
	int *a_ptr, total;
	
	total = 0;
	a_ptr = arreglo;
	while (a_ptr < arreglo + tamanio)
		total += *a_ptr++;	
	cout << "El total de los elementos del arreglo es: "<< total << endl;
		
	return 0;	
}



