#include <iostream>
using namespace std;
string cadena;
int a, cont = 0;
int main() {
    cin >> a >> cadena;
    for (int i = 0; i < a; i++) {
        if (cadena[i] == cadena[i + 1]) {
            cont++;
        }
    }
    cout << cont;
}
