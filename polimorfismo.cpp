#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string, int);
		virtual void mostrar();	
};

class Alumno : public Persona{
	private:
		float notafinal;
	public:
		Alumno(string, int, float);
		void mostrar();	
};

Persona::Persona(string nom, int ed){
	nombre = nom;
	edad = ed;
}

Alumno::Alumno(string nom, int ed, float notf) : Persona(nom, ed){
	notafinal = notf;
}

void Persona::mostrar(){
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

void Alumno::mostrar(){
	Persona::mostrar();
	cout << "Nota final: " << notafinal << endl;
}

int main(){
	Persona *vector[2];
	
	vector[0] = new Alumno("Robert", 14, 13.3);
	vector[0]->mostrar();	
	
	system("pause");
	return 0;
}
