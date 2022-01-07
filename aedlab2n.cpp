
#include<iostream>
#include<cstdlib>
#include<string.h>
#define max 1000

using namespace std;
struct nodo{
    int isbn;     
    char titulo[max]; 
    char editorial[max];
    char autores[max];
    char resumen[max];
    int year;
    struct nodo *sgte;

};
typedef struct nodo *NodoLibro;
void menu(void){      
    cout<<" 1 Registrar libro\n"; 
    cout<<" 2 Buscar titulo\n";   
    cout<<" 3 Mostrar libros\n";
    cout<<" 4 Buscar ISBN\n";    
    cout<<" 5 SALIR\n";                 

    cout<<"\n Ingrese opcion : ";
}

void registrar(NodoLibro &libro){
    NodoLibro temp1,temp2 = new(struct nodo);    
    cout<<"ISBN:"; cin>>temp2->isbn;
    cout<<"itulo:"; cin.getline(temp2->titulo,max);
    cout<<"editorial:"; cin.getline(temp2->editorial,max);
    cout<<"autor(es):"; cin.getline(temp2->autores,max);
    cout<<"resumen:"; cin.getline(temp2->resumen,max);
    cout<<"anio:"; cin>>temp2->year;
    system("cls");
    temp2->sgte = nullptr;
    if(libro==nullptr){
        libro = temp2;
    } else {
        temp1 = libro;
        while(temp1->sgte!=nullptr){
                temp1 = temp1->sgte;}
        temp1->sgte = temp2; }
}
void mostrar(NodoLibro arg){
    int index=1;
    while(arg!=nullptr){
        cout << "libro: "<< index << endl;        
        cout<<"ISBN   : " << arg->isbn << endl;
        cout<<"titulo  : "<<arg->titulo << endl;
        cout<<"editorial: "<< arg->editorial << endl;
        cout<<"autor(es): "<< arg->autores << endl;
        cout<<"resumen: "<< arg->resumen<< endl;
        cout<<"anio : "<< arg->year << endl;
        arg=arg->sgte;
        index++;
    }
}

void buscarisbn(NodoLibro libro){
    NodoLibro arg;
    int isbntemp;
    arg=libro;
    cout<<"codigo ISBN:"; cin>>isbntemp;
    system("cls");
    while(arg!=nullptr){
            if(arg->isbn==isbntemp){  
            cout<<"ISBN   : " << arg->isbn << endl;
            cout<<"titulo  : "<<arg->titulo << endl;
            cout<<"editorial: "<< arg->editorial << endl;
            cout<<"autor(es): "<< arg->autores << endl;
            cout<<"resumen: "<< arg->resumen<< endl;
            cout<<"anio : "<< arg->year << endl;
            }arg=arg->sgte;
        }
}

void buscartitulo(NodoLibro libro){
    NodoLibro arg;
    char tit;
    arg=libro;
    cout<<"titulo:"; cin>>tit;
    system("cls");
    while(arg!=nullptr){
            if(*arg->titulo==tit){                
                cout<<"ISBN   : " << arg->isbn << endl;
                cout<<"titulo  : "<<arg->titulo << endl;
                cout<<"editorial: "<< arg->editorial << endl;
                cout<<"autor(es): "<< arg->autores << endl;
                cout<<"resumen: "<< arg->resumen<< endl;
                cout<<"anio : "<< arg->year << endl;
            }
            arg=arg->sgte;
        }
}

int main(){
    NodoLibro libro=nullptr;
    int opcion;
    while(opcion<=7){
            menu();
            cin>>opcion;
            if (opcion == 1)
            {
                registrar(libro);
            }else if (opcion == 2)
            {
              buscartitulo(libro);
            }else if (opcion == 3)
            {
                mostrar(libro);
            }else if (opcion == 4)
            {
                buscarisbn(libro);
            }
            else if (opcion == 5)
            {
                break;
            }else{break;}
          
          } 
    return 0;
}
