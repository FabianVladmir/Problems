
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
    nodoHeap *top;
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
    top = nullptr;
}

template <class T>
void stack<T>::push(T element){

    nodoHeap *temp;
    temp = new nodoHeap(element);
    temp->next = top;
    top = temp;

}

template <class T>
void stack<T>::pop(){

    if (empty())
    {
        cout << "empty stack\n"; 
    }
    T temp = top->element;
    top = top->next;
    
}


template <class T>
bool stack<T>::empty () const{
    return top == nullptr;
}

template <class T>
T stack<T>::top() const{

    if(empty()){
        cout << "empty stack\n";
    }
    return top->element;
}

template <class T>
stack<T>::~stack()
{
    nodoHeap *temp;    
    while (!empty())
    {
        temp = top;
        top = top->next;
        delete temp;
    }
    
}

int main(){

  std::cout<< "ff";

  return 0;
}
