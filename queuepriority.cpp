
#include <iostream>
#include <stdlib.h>
using namespace std;


struct nodo
{
    char dato;
    int prioridad;        
    struct nodo *next;
};


struct cola
{
    nodo *cabeza;
    nodo *cola  ;
};

struct nodo *crearNodo( char x, int pr)
{
    struct nodo *nuevoNodo = new(struct nodo);
    nuevoNodo->dato = x;
    nuevoNodo->prioridad = pr;
    return nuevoNodo;
};

void encolar( struct cola &q, char valor, int prioridad )
{
     
     struct nodo *aux = crearNodo(valor, prioridad);
     aux->next = NULL;
     
     if( q.cabeza == NULL)
         q.cabeza = aux;   // encola cabeza
     else
         (q.cola)->next = aux;

     q.cola = aux;        // ultimo elemento 
}

void muestraCola( struct cola q )
{
     struct nodo *aux;
     
     aux = q.cabeza;
     
     cout << " Caracter  prioridaddad " << endl;
     cout << " ------------------- " << endl;
          
     while( aux != NULL )
     {
            cout<<"    "<< aux->dato << "     |   " << aux->prioridad << endl;
            aux = aux->next;
     }    
}

void ordenarprioridaddad( struct cola &q )
{
     struct nodo *aux1, *aux2;
     int p_aux;
     char c_aux;
     
     aux1 = q.cabeza;
     //  aux = 1(5) aux =2(3) 3
     while( aux1->next != NULL)
     {
            aux2 = aux1->next;
            
            while( aux2 != NULL)
            {
                   if( aux1->prioridad > aux2->prioridad )
                   {
                       p_aux = aux1->prioridad;
                       c_aux = aux1->dato;
                       
                       aux1->prioridad = aux2->prioridad;
                       aux1->dato   = aux2->dato;
                       
                       aux2->prioridad = p_aux;
                       aux2->dato   = c_aux;
                   }
                   
                   aux2 = aux2->next;
            }
            
            aux1 = aux1->next;
     }
}

void insertar( struct cola &q, char c, int pr )
{
    encolar( q, c, pr );
     
    ordenarprioridaddad( q ); 
}

void menu()
{
    cout<<"Cola de prioridad\n";
    cout<<" 1. Encolar "<<endl;
    cout<<" 2. Mostrar  "<<endl;
    cout<<" 3. Salir  "<<endl;

    cout<<"\n Ingrese opcion: ";
}

int main()
{
    struct cola temp;
    
    temp.cabeza = NULL;
    temp.cola   = NULL;

    char caracter ;     
    int prioridad;      
    int opcion;     
    //int x ;      // numero que devuelve la funcon popcion
    
    do
    {
        menu();  
        cin>> opcion;

        switch(opcion)
        {
            case 1:

                 cout<< "Caracter: ";
                 cin>> caracter;
                 
                 cout<< "Prioridad: ";   
                 cin>> prioridad;
                 
                 insertar( temp, caracter, prioridad );
                 
                 cout<<"Caracter :" << caracter << " insertado\n";
            break; 
                  
            case 2:

                 cout << "Lista de la cola\n";
                 
                 if(temp.cabeza!=NULL)
                     muestraCola( temp );
                 else   
                    cout<<"Cola vacia"<<endl;
            break;
            
            default:
                    cout<<"Opcion incorecta"<<endl;
                    system("pause");
                    exit(0);
         }

        cout<<endl;        

    }while(opcion!=3);
    
    return 0;
}