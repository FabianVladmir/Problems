#include <iostream>
using namespace std;

template <class T>
class Nodo{
    private:
        T element;
        Nodo<T>* previous = nullptr;
        Nodo<T>* next = nullptr;
        template<typename U> friend class dlinkedList;
    public:
        Nodo(T elem, Nodo *p, Nodo *n) : element(elem), previous(p), next(n){}
};

template <typename T>
class DLinkedList{

    private:
        Nodo<T> *head;
        Nodo<T> *tail;
    public:
        DLinkedList();
        void insert(T data, int position);
        void remove(int position);
        void find(T data);
        void insertrandom(int numbersofelements);
        ~DLinkedList();
};

template <typename T>
DLinkedList<T>::DLinkedList(){
    head = nullptr;
    tail = nullptr;
}

template<typename T>
void DLinkedList<T>::insert(T data, int posicion){
    Nodo<T> temp = new Nodo<T>;
    temp->element = data;
    Nodo<T> *prev = head;
    Nodo<T> *next = head->next;


}

template <typename T>
void DLinkedList<T>::remove(int position){

    

}