#include<iostream>
#include <ctime>
#include <time.h>

using namespace std; 

void generador(int arreglo[], int cantidad)
{
    srand(time(NULL));
    
    for(int c = 0; c < cantidad; c++)
    {
        arreglo[c] = 1 + rand() % (cantidad);
    }
}

void burbuja(int arreglo[], int num,int comparacion,int asignacion)  
{  
    int aux;
    for(int z = 1; z < num; ++z) {
        comparacion++;
        asignacion++; 
      for(int v = 0; v < (num - z); v++) {
         comparacion++;
         asignacion++; 
         if(arreglo[v] > arreglo[v+1]){
            comparacion++;
            aux = arreglo[v];
            arreglo[v] = arreglo[v + 1];
            arreglo[v + 1] = aux;
            asignacion+=3;
         }
      }
    }
    cout<<"Comparaciones = "<< comparacion <<endl;
    cout<<"Asignaciones = "<< asignacion <<endl;

}  
  
 
void printArray(int arr[], int cantidad)  
{  
    int i;  
    for (i = 0; i < cantidad; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  

int main()  
{  
    unsigned t0,t1;
    t0=clock();
    int cantidad;
    cout<<"cantidad de elementos ? ";
    cin>>cantidad;
    int arr[cantidad];
    generador(arr,cantidad);
    printArray(arr, cantidad);
    burbuja(arr, cantidad,1,1);
    cout<<"ELEMENTOS ORDENADOS "<<endl;
    printArray(arr, cantidad);
      
    t1 = clock();
 
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time << endl;
    return 0;  
}


// #include<iostream>
// #include <ctime>
// #include <time.h>

// using namespace std; 

// void generador(int arreglo[], int cantidad)
// {
//     srand(time(NULL));
    
//     for(int c = 0; c < cantidad; c++)
//     {
//         arreglo[c] = 1 + rand() % (cantidad);
//     }
// }

// void insertionSort(int arr[], int n,int comparaciones,int asignaciones)  
// {  
//     int i, key, j;  
//     for (i = 1; i < n; i++) 
//     {  
//         comparaciones++;
//         key = arr[i];
//         j = i - 1;
//         asignaciones+=2;  
//         while (j >= 0 && arr[j] > key) 
//         {  
//             comparaciones++;
//             arr[j + 1] = arr[j];  
//             j = j - 1;
//             asignaciones+=2;  
//         }  
//         arr[j + 1] = key;
//         asignaciones++;  
//     }  
//     cout<<" Comparaciones = "<< comparaciones<< endl;
//     cout<<" Asignaciones = "<<asignaciones<<endl;
// }  
  
// // A utility function to print an array of size n  
// void printArray(int arr[], int n)  
// {  
//     int i;  
//     for (i = 0; i < n; i++)  
//         cout << arr[i] << " ";  
//     cout << endl; 
// }  
  
// int main()  
// {  
//     unsigned t0,t1;
//     t0=clock();

//     int cantidad;
//     cout<<"cantidad de elementos ? ";
//     cin>>cantidad;
//     int arr[cantidad];
//     generador(arr,cantidad);
//     printArray(arr,cantidad);
//     insertionSort(arr, cantidad,1,1);  
//     printArray(arr, cantidad);  

//     t1 = clock();
 
//     double time = (double(t1-t0)/CLOCKS_PER_SEC);
//     cout << "Execution Time: " << time << endl;
//     return 0;  
// }