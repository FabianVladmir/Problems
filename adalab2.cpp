#include <bits/stdc++.h>
using namespace std;

//author : Fabian Vladimir Florez Aguilar

void generatorRandom(vector<int> &, int ); // initialize array
void printarr(vector<int> , int); // print array
void bublesort(vector<int> &, int, int, int); 
void insertionSort(vector<int> &, int ,int ,int );

int main(){

    int n, m;
    cin >> n >> m;    

    while(n--)
    {        
        vector<int> arr(m);        
        generatorRandom(arr,m);
        vector<int> arr2(arr);        
        cout << "InsertionSort: \n\n";
        //printarr(arr2,m);
        insertionSort(arr2,m,1,1);       
        
        //printarr(arr2,m);

        cout << "BubleSort: \n\n";
        //printarr(arr,m); 
        bublesort(arr,m,1,1);    
        //printarr(arr,m);        
        cout << endl;        
             
    }
    
    //get time in ms
    // #ifndef ONLINE_JUDGE
    //     cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    // #endif

    return 0;
}


void generatorRandom(vector<int> &arr, int size){

    srand((unsigned)time(0));
    
    int option;
    // option = (1 + rand() % 3);
    option = 3;

    if (option == 1) // increases
    {
        for(int i = 0; i < size; i++)
        {
            arr[i] = -size + rand() % (2*size + 1);
        }
        sort(arr.begin(), arr.end());
    }
    else if (option == 2) // decreases
    {
        for(int i = 0; i < size; i++)
        {
            arr[i] = -size + rand() % (2*size + 1);
        }
        sort(arr.begin(), arr.end(), greater<int>() );
    }

    else{ // random element without order array
        for(int i = 0; i < size; i++)
            {
                arr[i] = -size + rand() % (2*size + 1);
            }

    }

    // for(int i = 0; i < size; i++)
    // {
    //     arr[i] = -size + rand() % (2*size + 1);
    // }

}

void printarr(vector<int> arr, int size)  
{       
    for (int i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}

void bublesort(vector<int> &arr, int size, int assig, int compar){
    bool band = true;
    int pasada, j;
    for ( pasada = 0; pasada < size - 1 && band; pasada++)
    {
        assig++;
        compar++;

        band = false;
        for ( j = 0; j < size -pasada - 1; j++)
        {
            assig++;
            compar;
            if (arr[j] > arr[j+1])
            {
                band = true;
                swap(arr[j], arr[j+1]);
                assig+=3;
            }            
        }        

    }

    cout << "assigments: " << assig << endl;
    cout << "comparisons: " << compar << endl;
    #ifndef ONLINE_JUDGE
        cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif    
}

void insertionSort(vector<int> &arr, int size, int assig, int compar)  
{  
    int key; 
    for (int i = 1; i < size; i++) 
    {  
        compar++;
        key = arr[i];
        int j = i - 1;
        assig+=2;  
        while (j >= 0 && arr[j] > key) 
        {  
            compar++;
            arr[j + 1] = arr[j];  
            j = j - 1;
            assig+=2;  
        }  
        arr[j + 1] = key;
        assig++;  
    }  
    cout << "assigments: " << assig << endl;
    cout << "comparisons: " << compar << endl;
     #ifndef ONLINE_JUDGE
        cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif    
} 