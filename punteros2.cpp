#include <iostream>
//Resolucion de Problemas c++ cap 12 pag 635
//ejercicio 12
using namespace std;

int main(){
	int a[10];
	int *p = a;
	int i;
	for (i = 0; i < 10; i++)
		a[i] = i;
	for (i = 0; i < 10; i++)
		cout << p[i] << " ";
	cout<<endl;
	
	cout<<"Other exercise \n";
	int tamanio = 10;
	int *b;
	b = new int[tamanio];
	int *q = b;
	for (i = 0; i < tamanio; i++)
		b[i] = i;
	q[0] = 10;
	for (i = 0; i < tamanio; i++)
		cout <<b[i] <<" ";
	cout<<endl;				
	
	return 0;
}
