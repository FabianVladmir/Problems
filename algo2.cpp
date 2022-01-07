
#include <stdlib.h>
   
#include <iostream>
using namespace std;
int main() {
    int N,i=0;
    cin>>N;
    int arr[N];
    for( ;i<N;++i)
    cin>>arr[i];
    --i;
    for( ;i>=0;--i)
    cout<<arr[i]<<" ";
    return 0;
}
