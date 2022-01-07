#include <algorithm>
#include <vector>
using namespace std;


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

    else{ // random element without order array -size to +size 
        // for(int i = 0; i < size; i++)
        //     {
        //         arr[i] = -size + rand() % (2*size + 1);
        //     }
        // random element without order array 0 to +size
        for(int i = 0; i < size; i++)
            {
                arr[i] = 0 + rand() % (size);
                
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
