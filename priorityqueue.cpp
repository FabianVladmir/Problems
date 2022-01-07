#include <iostream>
using namespace std;

typedef struct
{
 int prioridad;
 char nombre[51];
}Tarea;


class nodo{
    private:
        Tarea data;
        nodo *next;
    public:
        nodo (Tarea x){ data = x; next = NULL;} 
        Tarea ObtenerE(){ return data;} 
        void PonerE(Tarea x){ data = x;} 
        nodo * ObtenerSig(){ return next;}
        void PonerSig( nodo *p){ next = p;} 
};

class priority_queue{

    private:
        nodo * CP;
    public:
        priority_queue(); // constructor
        bool empty();
        void insert(Tarea e);
        void QuitarMin();
        Tarea ElementoMin();
        ~priority_queue(); // destructor por defecto
};
        
priority_queue::priority_queue()
{
 CP = NULL;
}

void priority_queue::insert(Tarea e)
{
 nodo* Pos = CP, *Ant = NULL, *Nuevo = new nodo(e);
bool enc = false;
while (!enc && Pos) // mientras queden datos y no lo haya encontrado
    if (Pos->ObtenerE().prioridad <= e.prioridad)
    { // avanzar en la búsqueda de la posición donde insertar
        Ant = Pos;
        Pos = Pos->ObtenerSig();
    }
    else
        enc = true;
    // hay que insertar la Tarea e entre Ant y Pos
    // esta inserción puede ser en el pricipio de la lista o no principio
    if(Ant) // no es el primero
        Ant->PonerSig(Nuevo);
    else
        CP = Nuevo;
    Nuevo->PonerSig(Pos);
}

Tarea priority_queue::ElementoMin()
{
    if(! CP)
        return CP->ObtenerE();
    else
        throw " cola de Prioridad Vacía";
    }
    void priority_queue::QuitarMin()
    {
        nodo *Aux;
        if (!CP) // si no es vacía borrar el primer nodo
        {
            nodo *Aux = CP;
            CP = Aux->ObtenerSig(); //Avanza la Cola de Prioridad
            Aux-> PonerSig(NULL);
            delete Aux;
        }
        else
            throw " cola vacia";
}

bool priority_queue::empty()
{
 return (!CP);
}  

priority_queue:: ~priority_queue()
{
 nodo * Aux;
while(CP) // mientras queden datos en la lista
    {
    Aux = CP;
    CP = CP->ObtenerSig(); //avanzar en la lista
    Aux->PonerSig(NULL);
    delete Aux; //liberar nodo
    }
}

int main(){



    return 0;
}