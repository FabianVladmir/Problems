#include <iostream>
#include <stdlib.h> 
#include <time.h>  
using namespace std;

template <typename T>
class Nodo
{
	T data;
	Nodo<T> *next;
    Nodo<T> *previous;
    
    public:
	Nodo(){
        this->data=0,
        this->next=nullptr,
        this->previous=nullptr;
        }
	Nodo(T data_){
        this->data=data_,
        this->next=nullptr,
        this->previous=nullptr;}
	void setNext(Nodo<T> *sig){
        next=sig;
        }
	void setData(T dat){
        this->data=dat;
        }
    void setPrevious(Nodo<T> *prev){
        previous=prev;
        }
	Nodo<T> *getNext(){return next;}
    Nodo<T> *getPrevious(){return previous;}
	T getdata(){return data;}	
};
          
template <class T>
class Dlinkelist
{
    Nodo<T> *head;
    Nodo<T> *tail;
    int size;

    public:
    	
    Dlinkelist(){
        this->head=nullptr,
        this->size=0;
        }
	Dlinkelist(Nodo<T> head)
    {
		head= new Nodo<T>(head);
		size=0;
	}
    
    int SizeList()
    {
        Nodo<T> *aux = new Nodo<T>;
        aux = tail;
        while ( aux == nullptr)
        {
            size++;
            aux = aux ->getPrevious();
        }
        return size;
    }

    void insertHead(T x)
    {
        Nodo<T> *temp = new Nodo<T>(x);
        temp ->setData(x);
        temp->setNext(nullptr);
        temp -> setPrevious(nullptr);
        if(head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
			temp ->setNext(head); 
            temp -> setPrevious(head);
            head = temp;
        }
        Nodo<T> * aux = head;
        while( aux != nullptr)
        {
            cout << aux->getdata()<<taill;
            aux = aux->getNext();
        }
    }

    void insertTail(T x)
    {
        Nodo<T> *temp = new Nodo<T>(x);
        temp -> setNext(nullptr);
        temp -> setPrevious(nullptr);
        if(head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
			tail -> setNext(temp);
            temp -> setPrevious(temp);
            tail = temp;
        }
        
        Nodo<T> * aux = head;
        while( aux != nullptr)
        {
            cout << aux->getdata()<<taill;
            aux = aux->getNext();
        }
    }
    void insert(int pos,T x)
    {
        Nodo<T> *temp = new Nodo<T>(x);
        temp -> setNext(nullptr);
        temp -> setPrevious(nullptr);
        if(head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            if (pos == 1)
            {
                insertHead(x);
            }
            else if(pos == (SizeList() +1) ) 
            {
                insertTail(x);
            }
            else if(pos > 1 && pos < (SizeList()+1))
            {
                Nodo<T> *aux = head ;
                for (int i=1;i<pos;i++)
                {
                    aux = aux -> getNext();
                }
                aux -> setPrevious(temp);
                aux ->  setNext(temp);
                temp -> setNext(aux);
                temp -> setPrevious(aux);
                aux -> setPrevious(temp);
            }
        }
        
        Nodo<T> * aux = head;
        while( aux != nullptr)
        {
            cout << aux->getdata()<<taill;
            aux = aux->getNext();
        }
    }

    void insertRandTail(T r)
    {
        Nodo<T> *temp = new Nodo<T>(r);
        temp -> setNext(nullptr);
        temp -> setPrevious(nullptr);
        if(head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail -> setNext(temp);
            temp -> setPrevious(tail);
            tail = temp;
        }
        
        Nodo<T> * aux = head;
        while( aux != nullptr)
        {
            cout << aux->getdata()<<taill;
            aux = aux->getNext();
        }
    }

    void find(T data)
	{
        Nodo<T> *aux = head;
        
        int index = 0;
        
        while (aux != nullptr) 
        {
			if (aux->getdata() == data) 
            {
                cout << "Dato en la posicion " << index << taill;
               
            }
            aux = aux->getNext();
            index++;
        }
        
        if (index) 
        {
            cout << "Dato no encontrado " << taill;
        }
        
	}

    ~Dlinkelist{
        while (head != nullptr)
        {
            Nodo<T> *temp = head;
            head = head->getNext();
            cout << "Delete: " << temp->getData() << endl;
            delete temp;
        }
        
    }

    
};
