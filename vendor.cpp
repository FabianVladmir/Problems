#include<iostream>
#include <vector>
using namespace std;

//Autor : Fabian Vladimir Florez Aguilar
void seg_max(int ruta, vector<int> &arr , int tam){
    int sum_max = 0;
    int e,d,sum,i,j; //aux e,d
    e = 0;
    d = -1;
    sum = 0;
    i = 0;
    j = -1;

    // iterates to the end of the array
    while(j < tam-1){
        j = j+1;
        sum = sum + arr[j];

        //assing lower values
        if(sum < 0 )
        {
            sum = 0;
            i=j+1;
        }
        //get greater value
        else if (sum >= sum_max)
        {
            sum_max = sum;
            e=i;
            d=j;
        }
        
    }
    
    if(sum_max > 0)
        cout << "La mejor parte de la ruta: "<<ruta+1<<" es entre las calles: "<< e+1 <<" y "<< d+2 <<endl;
    else
        cout << "La ruta: "<< ruta+1 << " no tiene calles interesantes\n";
}

int main(){   
    
    int num_calles;
    int num_rutas;

    vector<int> arr(10000);
    vector<int> pedidos(10000);

    int pedids;
    cin >> num_rutas;
    for(size_t i = 0;i < num_rutas ; i++){
        cin>>num_calles;
        for(size_t j = 0 ; j < num_calles ; j++){
            arr[j]= j+1;
        }
        for(size_t k = 0 ; k < num_calles-1 ; k++){
            cin >> pedids;
            pedidos[k] = pedids;
        }
        seg_max(i,pedidos,num_calles-1);        
    }
    return 0;

}