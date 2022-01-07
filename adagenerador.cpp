#include <bits/stdc++.h>
using namespace std;

void generatorRandom(int [], int size); // initialize array
void printarr(int [], int size); // print array
void bublesort(int [], int size); 

int main(){

    int n, m;
    cin >> n >> m;
    // int *arr = new int [n];

    while(n--)
    {
        int arr[m];
        generatorRandom(arr,m);
        bublesort(arr,m);
        printarr(arr,m);        
    }
    // unsigned t0,t1;
    // t0=clock();
    // t1 = clock();
 
    // double time = (double(t1-t0)/CLOCKS_PER_SEC);
    // cout << "Execution Time: " << time << endl;

    // get time in ms
    #ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif

    return 0;
}


void generatorRandom(int arr[], int size){

    srand((unsigned)time(0));
    
    for(int i = 0; i < size; i++)
    {
        arr[i] = -size + rand() % (2*size + 1);
    }

}

void printarr(int arr[], int size)  
{       
    for (int i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}

void bublesort(int arr[], int size){
    bool band = true;
    int pasada, j;
    for ( pasada = 0; pasada < size - 1 && band; pasada++)
    {
        band = false;
        for ( j = 0; j < size -pasada - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                band = true;
                swap(arr[j], arr[j+1]);
            }            
        }        
    }    


}