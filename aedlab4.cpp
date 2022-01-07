#include <iostream>
#include <string>

template <class T>
class nodoQueues{
    private:
        nodoQueues* next;
        T element;
        template <typename U>friend class queues;
    public:
        nodoQueues();
        nodoQueues(T data);
};

template <class T>
nodoQueues<T>::nodoQueues(){
    this->next = nullptr;
    this->element = 0;
}

template <class T>
nodoQueues<T>::nodoQueues(T data){
    this->element = data;
    this->next = nullptr;
}

/***** CLASS QUEUES ******/

template <class T>
class queues{
    private:
        
        nodoQueues<T> *front;
        nodoQueues<T> *back;
        int size;
        
    public:
        queues();
        void insert(T data);
        void remove();
        bool empty() const;
        int getsize() const;
        T getfront() const;
        T getback() const;
        void palindroma(queues<T> &p, std::string cad);
        ~queues();

};

template<class T>
queues<T>::queues(){
    this->front = nullptr;
    this->back = nullptr;
    this->size = 0;
}

template <class T>
void queues<T>::insert(T data){

    nodoQueues<T> *temp;
    temp = new nodoQueues(data);
    if (empty())
    {
        front = temp;
    }else
    {
        back->next = temp;
    }
    back = temp;    
    size++;

}

template <class T>
void queues<T>::remove(){

    if (empty())
    {
        std::cout<<"empty queues";
    }
    
    else{
        T temp = front->element;
        nodoQueues<T> *temp2 = front;
        front = front->next;
        delete temp2;
    }
    size--;
}

template <class T>
bool queues<T>::empty() const{
    return front == nullptr;
}

template <class T>
int queues<T>::getsize() const{
    return size;
}

template <class T>
T queues<T>::getfront() const{

    if (empty())
    {
        std::cout<<"empty queues";
    }
    return front->element;
    
}

template <class T>
T queues<T>::getback() const{
    if (empty())
    {
        std::cout<<"empty queues";
    }
    return back->element;
}

template <class T>
void queues<T>::palindroma(queues<T> &p, std::string cad){

    queues<char> temp;
    bool band(true);
    for (size_t i = 0; i < cad.size(); i++)
    {
        temp.insert(cad[i]);
    }

    for (size_t i = cad.size()-1; i > 0; i--)
    {

        //temp = p;
        if (cad[i] == temp.getfront())  
        {
            temp.remove();
        }else{
            band = false;
        }
        
    }    

    if (band)
    {
        std::cout << "Is palindrome\n";
    }else
    {
        std::cout << "Not is palindrome\n";
    }

}

template<class T>
queues<T>::~queues(){

    nodoQueues<T> *temp = front;
    while (front != nullptr)
    {
        front = front->next;
        size--;
        delete temp;
    }
    back = nullptr;
}

using namespace std;

int main(){

    queues<char> cola;
    string cadena;
    //bool band(true);

    cout << "Ingrese una expresion: ";
    cin >> cadena;

    cola.palindroma( cola, cadena);

    return 0;
}