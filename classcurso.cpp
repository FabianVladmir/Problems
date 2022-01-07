#include <iostream>
#include <string>
using namespace std;
class Curso
{
private:
    string nombre;
    string codigo;
    int cantAlumno = 0;
public:
    Curso();
    Curso(string, string, int); // 
    
    void setNombre(string nom);
    string getNombre();    
    void setCodigo(string codigo);
    string getCodigo();
    void setNumAlumno(int cantAlum);
    int getNumAlumno();
    int incrementar();

    ~Curso();
};

Curso::Curso(string nom, string cod, int cantAlum)
{
    nombre = nom;
    codigo = cod;
    cantAlumno = cantAlum;
}
string Curso::getNombre(){
    return nombre;
}

void Curso::setNombre(string nom){
    nombre = nom;    
}

string Curso::getCodigo(){
    return codigo;
}

void Curso ::setNombre(string cod){
    codigo = cod;    
}

int Curso::getNumAlumno(){
    return cantAlumno;
}

void Curso::setNumAlumno(int canAlum){
    cantAlumno = canAlum;
}

int Curso::incrementar(){
    return cantAlumno++;
}

Curso::~Curso()
{
    cout << "Destruyendo el objeto" << endl;
}
int main(){
    Curso o1;
    Curso o2;
    o1.setNombre("cc2");
    o2.setNombre("Ingles");
    o1.getNombre();
    o2.getNombre();
    o1.setCodigo("001");
    o2.setCodigo("002");
    o1.getCodigo();
    o2.getCodigo();
    o1.setNumAlumno(20);
    o2.setNumAlumno(18);
    
    while (o2.getNumAlumno <= o1.getNumAlumno)
    {
        o2.incrementar();
    }
    return 0;
}