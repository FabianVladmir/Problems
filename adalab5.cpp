#include <iostream>
#include <math.h>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int maxx(vector<int> arr){

    int temp=arr[0];
    int cont=0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > temp)
        {
            temp=arr[i];
            cont++;
        }        
    }    
    return cont;
}

void generatorRandom(vector<int> &arr,int len){

    // srand((unsigned)time(0));
    
    for(int i = 0; i < len; i++)
    {
        arr[i] = rand() % (len + 1);
    }
}

int main(){
    
    double average = 0;
    // int vectorsize;
    // cin >> vectorsize;
    vector<int> vectorsize = {256,512,1024,2048,4096,8182,16384,32768,65536,131072,262144};

    for(int &c:vectorsize){
        for (int i = 0; i < 200; i++)
        {
            vector<int> arr(c);
            generatorRandom(arr,c);       
            average+=maxx(arr);            
        }
        average = average/200;
        cout << c  << " " << setprecision(5) << average << " " << log(c) + 1 << endl;   

    }

    return 0;
}