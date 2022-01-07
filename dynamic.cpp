#include <iostream>
#include <stdlib.h>
using namespace std;

typedef int * apuntInt;

void llenarArray(int [], int);
void imprimirEstado(int [], int);

int main(){
	int tamanio;
	cout <<"Numeros del arreglo"; cin >> tamanio;
	apuntInt a;
	a  = new int [tamanio];
	
	llenarArray(a, tamanio);
	imprimirEstado(a, tamanio);	
	delete [] a;
	
	return 0;
}

void llenarArray(int a[], int tamanio){
	cout << "Escriba " << tamanio << " numeros enteros ";
	for (int i = 0; i < tamanio; i++){		
		cin>> a[i];
	}
}

void imprimirEstado(int a[], int tamanio){
	for (int i = 0; i < tamanio; i++){
		cout << a[i] << " ";
	}
	cout <<endl;
}
