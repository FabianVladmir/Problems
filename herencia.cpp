#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string, int);
		void mostrarDatos();	
};

class Alumno : public Persona{
	private:
		string codigoAlumno;
		float notafinal;
	public:
		Alumno(string, int, string, float);
		void mostrarAlumno();	
};

Persona::Persona(string nom, int ed){
	nombre = nom;
	edad = ed;
}

void Persona::mostrarDatos(){
	cout<<"Su nombre es " << nombre << endl;
	cout << "Su edad es " << edad << endl;
}

Alumno::Alumno(string nom, int ed, string cod, float notf) : Persona(nom, ed){
	codigoAlumno = cod;
	notafinal = notf;
}

void Alumno::mostrarAlumno(){
	mostrarDatos();
	cout << "Codigo: "<< codigoAlumno << endl;
	cout << "Nota final: "<< notafinal << endl;
}

int main(){
	Alumno o1("Bano", 19, "12345", 18.9);
	o1.mostrarAlumno();
	
	
	
	system("pause");
	return 0;
}
