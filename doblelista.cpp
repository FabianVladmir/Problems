#include <iostream>
using namespace std;
template <class T>
class nodo{
public:
	T dato;
	nodo<T> *sig=NULL;
	nodo<T> *ant=NULL;
public:
	nodo(){}

	nodo(T a){
		dato = a;
	}
    
	void Set(T a){
		dato=a;
	} 
	void Setsig(nodo<T> *nsig){
		sig = nsig;
	}
	void Setant(nodo<T> *nant){
		ant = nant;
	}
	T Get(){
		return dato;
	}
	nodo<T>& Getsig(){
		return *sig;
	}
	nodo<T>& Getant(){
		return *ant;
	}
};