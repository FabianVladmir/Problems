#include <iostream>
using namespace std;

int main(){
    char cad[100000];
    int n, cont_n(0), cont_z(0);

    cin >> n;
    cin >> cad;

    for (size_t i = 0; i < n; i++)
    {
        if (cad[i] == 'z')
        {
            cont_z++;
        }else if (cad[i] == 'n')
        {
            cont_n++;
        }
    }
    while (cont_n--)
    {
        cout << 1 << " ";
    }while (cont_z--)
    {
        cout << 0 << " ";
    }
    return 0;
}