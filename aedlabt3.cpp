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
    this->next = 0;
    this->next = nullptr;
}

template <class T>
nodoHeap<T>::nodoHeap(T element_)
{
    this->element = element_;
    this->next = nullptr;
}

template <class T>
nodoHeap<T>::~nodoHeap<T>(){}

/** CLASS STACK **/
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
    temp = new nodoHeap<T>(element);
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

using namespace std;

int main(){

    const int MAX_ARRAY = 10;
    stack<int> pilaInt;
    int aux;

    cout << "INGRESE 10 NUMEROS ENTEROS AL AZAR\n";
    for (size_t i = 0; i < 10; i++)
    {
        cin >> aux;
        pilaInt.push(aux);
        
    }

    cout << "Print inverse: \n";
    while(!pilaInt.empty()){
      
      cout << pilaInt.top() << endl;
      pilaInt.pop();
    }
    cout << endl;    

    return 0;
}
