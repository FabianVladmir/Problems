#include <iostream>
//Resolucion de problemas c++ cap 12 pag 624
//ejercicio 4
using namespace std;

int main(){
	int *p1, *p2;
	p1 = new int;
	p2 = new int;
	*p1 = 10;
	*p2 = 20;
	cout << *p1 << " " << *p2 << endl;
	p1 = p2;
	cout << *p1 << " " << *p2 << endl;
	*p2 = 30;
	cout << *p1 << " " << *p2 << endl;
	
	cout <<"Segundo ejemplo\n";
	int *o1, *o2;
	o1 = new int;
	o2 = new int;
	*o1 = 10;
	*o2 = 20;
	cout<<*o1<<" "<<*o2<<endl;
	*o1 = *o2;
	cout<<*o1<<" "<<*o2<<endl;
	*o1=30;
	cout<<*o1<<" "<<*o2<<endl;
	
	return 0;
}
