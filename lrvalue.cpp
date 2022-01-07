/*Lvalue Reference*/
#include <iostream>
using namespace std;

int main()
{
  int a = 0;
  int &rr{a};
  cout << rr << endl;
  cout << &rr << endl;
  ++rr;
  cout << rr << endl;
  cout << &rr << endl;
}

/*Rvalue reference*/

template <typename T> 
void swap(T& a, T& b) // "correcto swap"
{ 
    T tmp {static_cast<T&&>(a)}; 
    a = static_cast<T&&>(b); 
    b = static_cast<T&&>(tmp); 
}