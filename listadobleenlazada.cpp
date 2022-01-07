template <class T>
class ListaDobleLigada;

template <class T>
class NodoDoble
{
private:
    NodoDoble<T> *LigaIzq;
    NodoDoble<T> *LigaDer;
    T elemento;
public:
    NodoDoble();
    friend class ListaDobleLigada;
    ~NodoDoble();
};

template <class T>
NodoDoble<T>::NodoDoble()
{
    LigaDer = nullptr;
    LigaIzq = nullptr;
}

template <class T>
NodoDoble<T>::~NodoDoble()
{
}

// ******* ***************
template <class T>
class ListaDobleLigada
{
private:
    NodoDoble<T> *Primero;
    NodoDoble<T> *Ultimo;
public:
    ListaDobleLigada();
    void InsertarInicio(T dato);
    void InsertarFinal(T dato);
    void InsertarOrdenado(T dato);
    void EliminarPrimero();
    void EliminarUltimo();
    void EliminarUnElemento(T dato);
    ~ListaDobleLigada();
};

template <class T>
ListaDobleLigada<T>::ListaDobleLigada()
{
    Primero = nullptr;
    Ultimo = nullptr;
}

template<class T>
void ListaDobleLigada<T>::InsertarInicio(T dato){

    NodoDoble<T> *aux;
    aux = new NodoDoble<T>();
    aux->elemento = dato;
    aux->LigaIzq = Ultimo;
    if (Primero)
    {
        Primero->LigaDer = aux;
    }else
    {
        Primero = aux;
        Ultimo = aux;
    }
    
}

template <class T>
void ListaDobleLigada<T>::InsertarFinal(T dato){

    NodoDoble<T> *aux;
    aux = new NodoDoble<T>();
    aux->elemento = dato;
    aux->LigaIzq = Ultimo;
    if (Ultimo)
    {
        Ultimo->LigaDer = aux;
    }
    else
    {
        Primero = aux;
        Ultimo = aux;
    }    
    
}

template <class T>
void ListaDobleLigada<T>::InsertarOrdenado(T dato){

    NodoDoble<T> *aux1, aux2, aux3;
    // si la lista esta vacio o el valor a insertar 
    // es mas pequeño que el primer elemento
    if (Primero || dato < Primero->elemento)
    {
        InsertarInicio(dato);
    }
    
    // si el dato es mas grande que el ultimo
    else
    {
        if (dato > Ultimo->elemento)
        {
           InsertarFinal(dato);
        }
        else
        {
            aux1 = new NodoDoble<T>;
            aux1->elemento = dato;
            aux2 = Primero;
            while (aux2->elemento < aux1->elemento)
            {
                aux2 = aux2->LigaDer;
                aux3 = aux2->LigaIzq;
                aux3->LigaDer = aux1;
                aux1->LigaDer = aux2;
                aux1->LigaIzq = aux3;
                aux2->LigaIzq = aux1;
            }
            
        }
        
    }
    
}

template <class T>
void ListaDobleLigada<T>::EliminarPrimero(){

    NodoDoble<T> *aux;
    // si tiene algun elemento
    if (Primero)
    {
        aux = Primero;
        if (aux->LigaDer)
        {
            Primero = aux->LigaDer;
            Primero->LigaIzq = nullptr;
        }
        // tiene solo un elemento
        else
        {
            Primero = nullptr;
            Ultimo = nullptr;
        }
        delete aux;
        
    }
    
}

template <class T>
void ListaDobleLigada<T>::EliminarUltimo(){
    NodoDoble<T> *aux;
    //si tiene almenos un elemento
    if (Ultimo)
    {
        if (aux->LigaIzq)
        {
            Ultimo = aux->LigaIzq;
            Ultimo->LigaDer = nullptr;
        }
        // tiene un solo elemento
        else
        {
            Primero = nullptr;
            Ultimo = nullptr;
        }        
        
    }
    delete aux;
    
}

template <class T>
void ListaDobleLigada<T>::EliminarUnElemento(T dato){

    NodoDoble<T> aux1, aux2, aux3;
    //si la lista tiene almenos un elemento
    if (Primero)
    {
        aux1 = Primero;
        while ((aux1 != nullptr) && (aux1->elemento != dato))
        {
            aux1 = aux1->LigaDer;
        }
        if (aux1 == nullptr)
        {
            break;
        }
        else
        {
            //si hay un solo elemento en la lista
            if (Primero == Ultimo)
            {
                Primero = nullptr;
                Ultimo = nullptr;
            }
            else
            {
                // si el elemento a elimar es el primero
                if (aux1 == Primero)
                {
                    Primero = aux1->LigaDer;
                    Primero->LigaIzq = nullptr;
                }
                else
                {
                    // si el elemento es el ultimo a eliminar
                    if (aux1 == Ultimo)
                    {
                        Ultimo = aux1->LigaIzq;
                        Ultimo->LigaDer = nullptr;
                    }
                    else
                    {
                        aux2 = aux1->LigaIzq;
                        aux3 = aux1->LigaDer;
                        aux2->LigaDer = aux3;
                        aux3->LigaIzq = aux2;
                    }
                    
                }
                
                
            }
            
            
        }
        
    }
    
}

template <class T>
ListaDobleLigada<T>::~ListaDobleLigada()
{
}

