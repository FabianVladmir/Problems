#include <iostream>
#include <stdlib.h>
//#include <conio.h>
using namespace std;

typedef int* apuntInt;
int main(){
	int f, c;
	cout<<"Escriba las filas y columnas: "; cin >> f >> c;
	
	apuntInt *m = new apuntInt[f];
	for (int i = 0 ; i < f; i++){
		m[i] = new int [c];
	}
	
	cout <<"Escriba " <<f <<" filas de "<< c << " enteneros en cada una: \n";
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++)
			cin >> m[f][c];
	}
	
	cout<<"La matriz es: \n";
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++)
			cout << m[f][c] << " ";
		cout << endl;	
	}
	
	for (int i = 0; i < f; i++){
		delete []  m[i];
	delete [] m;	
	}
	// getch();
	return 0;
}
