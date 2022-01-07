#include <iostream>
#include <stdlib.h>
using namespace std;

typedef int *apuntInt;
int main(){
    int f, t;
    cin >> t;
    for (size_t i = 0; i < t; i++)  
    
    {
        cin >> f;
        apuntInt *matriz = new int*[f];
        for (size_t i = 0; i < f; i++)
        {
            matriz[i] = new int[f];
        }
        for (size_t i = 0; i < f; i++)
        {
            for (size_t j = 0; j < f; j++)
            {
                cin >> matriz[i][j];
            }        
        }
        int k(0);
        for (size_t i = 0; i < f; i++)
        {
            for (size_t j = 0; j < f; j++)
            {
               if (j == i)
               {
                   k+=matriz[i][j];
               }               
            }            
        }
        int cont_colum(0), aux_col(0), c(0);
        for (size_t i = 0; i < f; i++)
        {
            for (size_t m = 0; m < f - 1; m++)
            {
               aux_col = matriz[m][i];
               for (size_t j = m + 1; j < f - 1; j++)
               {
                   if (aux_col == matriz[j][i])
                    {
                        cont_colum++;
                        // cout << k+1 << " " << j+1 << endl;
                    }               
               }
                // cout << aux_col << " ";
            }           
            // cout << aux_col << " " << endl;
            if (cont_colum > 0)
            {
                c++;
            }
        }
        int cont_filas(0), aux_fil(0), r(0);
        for (size_t i = 0; i < f ; i++)
        {
            for (size_t j = 0; j < f - 1; j++)
            {
               aux_fil = matriz[i][0];
               
               if (aux_fil == matriz[i][j+1])
               {
                   cont_filas++;                   
               }                
            }
            if (cont_filas > 1)
            {
                r++;
            }            
        }
    
    cout << "Case #" << i + 1 << ": " << k << " " << r << " " << c << endl;    
    
    for(size_t i = 0; i < f; i++){
        delete []matriz[i];
    }
	delete matriz;           
    }
    
    return 0;
}