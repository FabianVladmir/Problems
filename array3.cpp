#include <iostream>
using namespace std;
#define tamanio 3
int x = tamanio;
int y = 2;
int z = tamanio;

void multiplicar(int *(n)[tamanio][tamanio]);

int main(){

    
    int array3[tamanio][tamanio][tamanio];
    int *ptr_3;
    ptr_3 = array3[0][0];

    int iniciador(0);
    
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            for (size_t k = 0; k < z; k++)
            {
                
                array3[i][j][k] = iniciador;
                iniciador++;
            }
            
        }
        
    }
    
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            for (size_t k = 0; k < z; k++)
            {
                cout << array3[i][j][k] << " ";
            }
            cout << endl;
            
        }
        cout << endl;
    }
    
    cout << *(array3[0][1] + 1) << endl;
    cout << *(array3[1][1] + 1) << endl;
    cout << *(array3[2][0] + 1) << endl;
    
    //multiplicar(array3[tamanio][tamanio]);


    cout << &array3[0][1][0] << endl;
    cout << &array3[1][0] << endl;
    cout << &array3[2][0][0] << endl;


    /*
    cout << endl;
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            for (size_t k = 0; k < z; k++)
            {
                cout << array3[i][j][k] << " ";
            }
            cout << endl;
            
        }
        cout << endl;
    }
    */
    return 0;
}


void multiplicar(int (*array3)[tamanio][tamanio]){


    for (size_t i = 0; i < x; i++)
        {
            for (size_t j = 0; j < y; j++)
            {
                for (size_t k = 0; k < z; k++)
                {
                    
                    (*array3)[j][k] =  (*array3)[j][k] * 3;
                    
                }
                
            }
            
        }

}