#include<iostream>
#include <vector>

//Autor : Fabian Vladimir Florez Aguilar
using namespace std;
 int index1 = 0;
 int index2 = 0;

// get max of 3 numbers
int maxtres(int max_l, int maxx, int max_r)
{
	int valormax = max(max_l,maxx);
	return max(valormax, max_r);
}

//divide_vencer
int segmax_div_venc(vector<int> &arr, int p, int r)
{
	if ( p == r) 
        return max(0, arr[p]);
	
	int q= (p+r)/2;
	int max_l, max_r, aux_max_l, sum = 0;

	max_l = segmax_div_venc(arr, p, q);
	max_r =  segmax_div_venc(arr, q+1, r);

	aux_max_l =sum = arr[q];
    
    for (int i = q-1; i >= p ; i--)
	{
		sum = sum + arr[i];
        aux_max_l = max(aux_max_l, sum);
        if( aux_max_l <= sum){
            index1 = i;
        }
		
    }
    int aux_max_r = sum = arr[q+1];

	for (int j = q+2; j <= r; ++j)
	{
		sum = sum + arr[j];
		aux_max_r = max(aux_max_r, sum);
        
        if( aux_max_r <= sum){
            index2 = j;
        }
		
	}
	int max = aux_max_l + aux_max_r;
    return maxtres(max_l,max,max_r);
}


int main(){  
    int num_calles;
    int num_rutas;

    vector<int> arr(10000);
    vector<int> pedidos(10000);

    int num_pedids;
    cin >> num_rutas;
    for(size_t i = 0;i < num_rutas ; i++){
        cin>>num_calles;
        for(size_t j = 0 ; j < num_calles ; j++){
            arr[j]= j+1;
        }
        for(size_t k = 0 ; k < num_calles-1 ; k++){
            cin >> num_pedids;
            pedidos[k] = num_pedids;
        }

        int valor_max = segmax_div_venc(pedidos,0,num_calles-1);
        cout<<valor_max<<endl;  
        
        if( valor_max> 0)
            cout << "La mejor parte de la ruta: "<<i+1<<" es entre las calles: "<< index1+1 <<" y "<< index2+2 <<endl;
        else
            cout << "La ruta: "<< i+1 << " no tiene calles interesantes\n";
    }
        
}