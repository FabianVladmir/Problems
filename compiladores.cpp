#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Enter a string: ";
    string cad;
    cin >> cad;
    for (size_t i = 0; i < cad.size(); i++)
    {
        cout << cad[i] << endl;
    }
    return 0;
}



