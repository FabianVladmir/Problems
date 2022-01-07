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
    bool checkSymbol(char *string, char start, char end);
    
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
bool stack<T>::checkSymbol(char *string, char start, char end){
  
  stack<char> *temp;
  while(*string){
    if(*string == end){

      if(temp != nullptr){
        temp->pop();
      }
      else{
        return false;
      }

    }
    if(*string == start){

      temp->push(start);
    }
    string++;
  }
  if(temp == nullptr){
    return true;

  }
  else{
    return false;
  }

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

    string array;
    cin >> array;
    bool parenthesis = checkSymbol(array, '(',')');
    bool brackets = checkSymbol(array, '[',']');
    bool keys = checkSymbol(array, '{','}');

    if(parenthesis){
      cout << "valid expresion\n"; 
    }else{
      cout << "invalid expresion missing a (\n";
    }

    if(brackets){
      cout << "valid expresion\n"; 
    }else{
      cout << "invalid expresion missing a [\n";
    }   

    if(keys){
      cout << "valid expresion\n"; 
    }else{
      cout << "invalid expresion missing a {\n";
    }       

    return 0;
}