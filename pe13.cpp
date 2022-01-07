#include <iostream>
using namespace std;

int main(){
    string cad_num = "3710728753390210279879799822083759024651013574025046376937677490009712648124896970078050417018260538";
    int total(0), index(0), aux;
    for (size_t i = 0; i < cad_num.size(); i++)
    {
        aux = index;
        while (aux <= 9)
        {
            total+=cad_num[index] - 48;
            index++;
        }
        index+=40;
              
    }

    cout << index << " "<< total << endl;

    return 0;
}