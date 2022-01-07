#ifndef ARRAYDINAMICO_H
#define ARRAYDINAMICO_H
#include <iostream>
using namespace std;

template<typename T>
class ArrayDinamico
{
    public:
        ArrayDinamico();
        ArrayDinamico(const T pelems[], const int size);
        ArrayDinamico(ArrayDinamico &o);
        ~ArrayDinamico();

        void print();
        int getSize() const;
		
        void clear();
		void push_back(const T &p);
		void insert(const int, const T &);
		void remove(const int);

        friend ostream & operator <<<>(ostream &o, const ArrayDinamico <T> &p);

    private:
        int size;
        T *elems;
		void resize(int);
};

template<typename T>
ArrayDinamico<T>::ArrayDinamico()
{
    this->size = 0;
    this->elems = new T[size];
}

template<typename T>
ArrayDinamico<T>::ArrayDinamico(const T pelems[], const int size) {
    this->size = size;
    this->elems = new T[size];
    for(int i = 0; i < size; i++)
        elems[i] = pelems[i];
}

template<typename T>
ArrayDinamico<T>::ArrayDinamico(ArrayDinamico &o){
    this->size = o.size;
    this->elems = new T[size];
    for(int i = 0; i < size; i++)
        elems[i] = o.elems[i];
}

template<typename T>
int ArrayDinamico<T>::getSize() const{
    return size;
}

template<typename T>
void ArrayDinamico<T>::resize(int newSize){
	T *pelems = new T[newSize];
	int minsize = (newSize > size) ? size : newSize;
	for(int i = 0; i < minsize; i++)
		pelems[i] = elems[i];
	delete[] elems;
	size = newSize;
	elems = pelems;
}

template<typename T>
void ArrayDinamico<T>::clear() {
	resize(0);
}

template<typename T>
void ArrayDinamico<T>::push_back(const T &p) {
	resize(size+1);
	elems[size-1] = p;
}

template<typename T>
void ArrayDinamico<T>::insert(const int pos, const T &p) {
	resize(size + 1);
	for(int i = size -1; i < pos; i--)
		elems[i] = elems[i-1];
	elems[pos] = p;		
}

template<typename T>
void ArrayDinamico<T>::remove(const int pos) {
	if (pos >= 0 && pos < size)
    {
        for (size_t i = pos; i < size; i++)
        {
            elems[i] = elems[i+1];
        }
        resize(size-1);
    }
}

template<typename T>
ArrayDinamico<T>::~ArrayDinamico()
{
    delete[] elems;
}


#endif // POINTARRAY_H

/*
template <typename T>
ArrayDinamico<T> ostream& operator <<<>(ostream &o, const ArrayDinamico <T> &p){
    for (size_t i = 0; i < size; i++)
    {
        o <<  "(" << p.o << "," << p.b ")";
        return o;
    }
    
}*/

int main(){
    int a(2), b(2), t(5), p(6);
    //ArrayDinamico n[4] = {a,b,t,p}
    // cout << n << endl;

    return 0;
}