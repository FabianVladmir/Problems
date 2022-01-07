#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[3], total(0);
    for (size_t i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+3);
    for (size_t i = 0; i < 2; i++)
    {
        total = total + (arr[i+1] - arr[i]);
        
    }
    
    cout << total << endl;

    return 0;
}