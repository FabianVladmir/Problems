#include <iostream>
#include <math.h>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <iomanip>
 using namespace std;

double count=0; // variable global

void generatorRandom(int arr[],int len){

    // srand((unsigned)time(0));    
    for(int i = 0; i < len; i++)
    {
        arr[i] = rand() % (len + 1);
    }
}
 void swap (int* a , int * b )
 {
    int t = * a ;
    * a = * b;
    * b = t ;
}

 int partition (int arr[] , int l , int r )
 {
    int pivot = arr[r];
    int i = ( l - 1) ;

    for ( int j = l ; j <= r - 1; j ++)
    {
        if ( arr[j] < pivot ){
        i++;
        count++;
        swap(&arr[i] , &arr[j]);
        }
    }
    swap(&arr[i+1] ,&arr[r]);
    return (i+1);
 }


 void quickSort ( int arr[], int l , int r )
 {
    if ( l < r )
    {
        int pi = partition ( arr , l , r ) ;
        quickSort ( arr , l , pi - 1) ;
        quickSort ( arr , pi + 1 , r );
    }
 }

 int main ()
 {    
    int siz;
    
    cin >> siz;
  
    float average ;
    for ( int i = 0; i < 200; i ++)
    {
    
    int A [siz];
    generatorRandom(A,siz);
    
    quickSort (A ,0 , siz -1) ;
    
    }    
    average = count /200;
    cout << average << endl ;
    return 0;
 }