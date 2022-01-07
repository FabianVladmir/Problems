/* move*/

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &a);

int main(){
    vector<int> a;
    vector<int> b;
    for (size_t i = 0; i < 6; i++)
    {
        a.push_back(i);
    }
    
    for (size_t i = 10; i < 16; i++)
    {
        b.push_back(i);
    }
    
    printVector(a);
    printVector(b);

    b = move(a);

    printVector(a);
    printVector(b);

    return 0;
}

void printVector(vector<int> &a){
    cout << "Vector\n";
    for (auto i = a.begin(); i < a.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

/*move con punteros inteligentes*/

#include <iostream>
#include <memory>

using namespace std;

struct noisy
{
    noisy() { cout << "constuctor predeterminado" << endl; }
    noisy(int i) { cout << "construyendo noisy: arg " << i << endl; }
   ~noisy() { cout << "destruyendo noisy" << endl; }
};
 
int main()
{
    unique_ptr<noisy> u1(new noisy);    
    unique_ptr<noisy[]> u3(new noisy[3]);
    unique_ptr<noisy[]> u4(new noisy[2]{1});
    unique_ptr<noisy> u5;

    cout << "antes de la transferencia de u1 = " << u1.get() 
         << ", u5 = " << u5.get() << endl;
   
    u5 = move(u1);
    cout << "despues de la transferenica de u1 = " << u1.get() 
         << ", u5 = " << u5.get() << endl;

    return 0;
}