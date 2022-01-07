#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void pedirDatos();
void imprimirEstado();
void cambiarValor(int, int);

int *a_ptr, arreglo, i, posicion, valor;
int main(){
	pedirDatos();	
	imprimirEstado();	
	cambiarValor(int 4 , int 23);
	
	delete[] a_ptr;
	getch();
	return 0;
}

void pedirDatos(){
	cout <<"Numeros del arreglo: "; cin >> arreglo;
	a_ptr = new int [arreglo];
	for (i = 0; i < arreglo; i++){	
		cout << "Ingrese un numero: ";
		cin >> a_ptr[i];}	
}

void imprimirEstado(){
	for ( i = 0; i < arreglo; i++){
		cout << a_ptr[i]<<" ";
	}
}

void cambiarValor(int posicion, int valor){
	cout << "Ingrese la posicion que desea cambiar y el valor: "; cin >> posicion >> valor;
	for (i = 0; i < arreglo; i++){
		if(posicion <= arreglo){
			a_ptr[posicion] = valor;
		}
	}
}


