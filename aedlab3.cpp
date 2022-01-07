#include <iostream>
template <class T>
class nodoHeap
{
private:
    nodoHeap *next;
    T element;
    template <typename U>friend class stack;
public:
    nodoHeap();
    nodoHeap(T x);
    ~nodoHeap();
};

template <class T>
nodoHeap<T>::nodoHeap(){
    this->next = nullptr;
}

template <class T>
nodoHeap<T>::nodoHeap(T element_)
{
    this->element = element_;
    this->next = nullptr;
}

template <class T>
class stack
{
private:
    nodoHeap<T> *data;
public:
    stack();
    void push(T element);
    void pop();
    T top() const;
    bool empty() const;    
    ~stack();
};

template <class T>
stack<T>::stack()
{
    data = nullptr;
}

template <class T>
void stack<T>::push(T element){

    nodoHeap<T> *temp;
    temp = new nodoHeap(element);
    temp->next = data;
    data = temp;

}

template <class T>
void stack<T>::pop(){

    if (empty())
    {
        std::cout << "empty stack\n"; 
    }
    T temp = data->element;
    data = data->next;
    
}

template <class T>
bool stack<T>::empty () const{
    return data == nullptr;
}

template <class T>
T stack<T>::top() const{

    if(empty()){
        std::cout << "empty stack\n";
    }
    return data->element;
}

template <class T>
stack<T>::~stack()
{
    nodoHeap<T> *temp;    
    while (!empty())
    {
        temp = data;
        data = data->next;
        delete temp;
    }
    
}

int main(){

  std::cout<< "ff";

  return 0;
}
