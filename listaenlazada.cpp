#include <iostream>
using namespace std;

template <typename T>
class Nodo
{
private:
    T element;
    Nodo<T> *next;
    template<typename U> friend class linkedList;
    
public:
    Nodo();
    Nodo(T element_);
    Nodo(T p, Nodo* n);    
    ~Nodo();
};

template <typename T>
Nodo<T>::Nodo(){
    this->element = 0;
    this->next = nullptr;
}

template <typename T>
Nodo<T>::Nodo(T element_)
{
    this->element = element_;
    this->next = nullptr;
}

template <typename T>
Nodo<T>::Nodo(T p, Nodo *n){
    this->element = p;
    this->next = n;
}

/*************/
template <typename T>
class linkedList
{
private:       
    Nodo<T>* head;
    int position;
    int size;

public:    
    linkedList();
    void insertarpos(T valor, int posicion); //
    int getPosition();
    void remove2(int index);

    void insertar(T valor);
    void remove(T eliminar);
    void print();
    void find(T valor);    
    ~linkedList();
    
};

template <typename T>
linkedList<T>::linkedList( ){

    position = 0;   
    this->head = nullptr;
}

template <typename T>
int linkedList<T>::getPosition(){
    return position;
}

template<typename T>
void linkedList<T>::insertarpos(T valor, int posicion){

    Nodo<T> *aux2;
    Nodo<T> *aux = head;
    aux2 = new Nodo<T>(valor);
    if(head == nullptr){
        head = aux2;
        position++;
    }
    else
    {
        
    }
    
}


template <typename T>
void linkedList<T> :: insertar(T valor){   
    
    Nodo <T> *new1;
    Nodo <T> *aux = head;    
    
    new1 = new Nodo<T>(valor);      
    
    if (head == nullptr) // case 1
    {       
        head = new1;
    }   
    else 
    {
      if(head->element > valor){//case 2
        new1->next = head;
        head = new1;
      }else{ // case 3
        while((aux->next != nullptr) && (aux->next->element < valor)){
          aux = aux->next;
        }
        new1->next = aux->next;
        aux->next = new1;
      }
        
    }
}

template<typename T>
void linkedList<T>::remove2(int index){
    if(index >= 0 && index < position){
        Nodo<T> *temp = head;
        while (temp->getPosition() != index)
        {
            temp = temp->next;
            if (temp->getPosition() == index)
            {
                delete temp->getPosition();
                position--;
                break;
            }
            
        }
        
    }

}

template <typename T>
void linkedList<T>:: remove(T eliminar){
    if (head == nullptr) // case 1
    {
        return;
    }

    if (head->element == eliminar) // case2
    {
        Nodo<T>* aux = head;
        head = head->next;
        delete aux;
        return;        
    }
    Nodo<T>* aux = head;
    while (aux->next != nullptr && aux->next->element != eliminar) // case3
    
    aux = aux->next;
    
    Nodo<T> *aux2 = aux->next;
    aux->next = aux2->next;
    delete aux2;    
    
}

template <typename T>
void linkedList<T> ::print(){
    for (Nodo<T>* i = head; i != nullptr; i = i->next)
    {
        cout << i->element << " ";
    }
    cout << endl;
}

template <typename T>
void linkedList<T>::find(T valor){
    
    Nodo<T> *aux = head;
    while (aux != nullptr && aux->element != valor)
    {       
        aux = aux->next;
    }
    if(aux != nullptr){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
}

template <typename T>
linkedList<T>::~linkedList()
{
    while (head != nullptr)
    {
        Nodo<T> *p = head; 
        head = head->next;
        cout << "Eliminando: " << p->element << endl;
        delete p;
    }    
}

int main(){
    
    linkedList <double> lista;
    for(double i = 1.2; i<10.9; i+=1.2){
      lista.insertar(i);
    }
    lista.print();

    lista.remove(2.4);
    lista.remove(6.0);

    lista.print(); 

    lista.find(7.2);
    lista.find(6.5);
    
   
    linkedList<int> lista2;

    for (size_t i = 0; i < 20; i++)
    {
        lista2.insertar(i);
    }

    lista2.print();

    for (size_t i = 0; i < 13; i++)
    {
        if (i % 3 == 0)
        {
            lista2.remove(i);
        }        
    }
    
    lista2.print();

    lista2.find(17);
    lista2.find(12);
    
    cout << endl;    

    return 0;
}