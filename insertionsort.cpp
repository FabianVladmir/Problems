#include <iostream>
#include <vector>

using namespace std;


// void insertionSort(vector<int> &arr, int size)  
// {  
//     int key; 
//     for (int i = 1; i < size; i++) 
//     {  
//         // compar++;
//         key = arr[i];
//         int j = i - 1;
//         // assig+=2;  
//         while (j >= 0 && arr[j] > key) 
//         {  
//             // compar++;
//             arr[j + 1] = arr[j];  
//             j = j - 1;
//             // assig+=2;  
//         }  
//         arr[j + 1] = key;
//         // assig++;  
//     }  
//     // cout << "assigments: " << assig << endl;
//     // cout << "comparisons: " << compar << endl;

//     // get time in ms
//     // #ifndef ONLINE_JUDGE
//     //     cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
//     // #endif    
// } 

void insertionSort(vector<int> &arr, int ini, int size)  
{  
    int key; 
    for (int i = ini; i < size; i++) 
    {  
        // compar++;
        key = arr[i];
        int j = i - 1;
        // assig+=2;  
        while (j >= ini && arr[j] > key) 
        {  
            // compar++;
            arr[j + 1] = arr[j];  
            j = j - 1;
            // assig+=2;  
        }  
        arr[j + 1] = key;
        // assig++;  
    }  
    // cout << "assigments: " << assig << endl;
    // cout << "comparisons: " << compar << endl;

    // get time in ms
    // #ifndef ONLINE_JUDGE
    //     cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    // #endif    
} 