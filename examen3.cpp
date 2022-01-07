#include <algorithm>
class A
{
    int i, *p;
public:
    
    A(const A& a): i(a.i), p(new int(*a.p)) {}

    A(A &&a) : i(a.i), p(a.p){} // moveconstructor
    {
        a.i = 0;
        a.p = nullptr;
    }
    
    A &operator=(const A& o) //operador de asignacion
    {
       A copia = o;
       std::swap(*this,copia);
       return *this; 
    } 
    
    A &operator=(A &&o) //move assigment
    {
        std::swap(i,o.i);
        std::swap(p,o.p);
        return *this;        
    }

    ~A(){delete p;}
};

int main(){
    A mm();
    
    A rr(mm()); //move construnctor

    A rubali();
    A liz();
    liz() = rubali(); //move assigment

    return 0;
}

