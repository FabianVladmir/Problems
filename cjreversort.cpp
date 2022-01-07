#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int answer(0);

        for (size_t i = 0; i < n; i++)
        {
            int min_aux= arr[i];
            int j(0);
            int m(i);

            while (m < n-1)
            {
                m++;
                if (min_aux >= arr[m])   
                {
                    j++;
                }else{
                    min_aux = arr[m];
                    swap(arr[i], arr[j]);
                } 
            }
            
            int temp = j-i;
            answer+=abs(temp)+1;
            j=0;
        }
        
        cout << answer << endl;
        
    }
    return 0;
}

