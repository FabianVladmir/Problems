#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long int sumdigit(long long int n){
    long long int sum = 0;
    while (n >= 1)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;    
}

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int temp = sumdigit(n);    
        while(__gcd(n,temp) <= 1){
            n++;
            temp = sumdigit(n);        
        }
        
        cout << n << endl;
        // int answer = gcdsum(n);
        // cout << answer << endl;

    }
    
    return 0;
}


// int mcd(int m, int n){
//     int p(1), aux;
//     if(m < n){
//       aux = m;
//     }
//     else{
//       aux = n;
//     }
//     for (int i = 1; i <= aux; i++)
//     {
//         if((m % i == 0) && (n % i == 0)){
//             p = i;
//         }
//     }
//     return p;
// }

// int gcdsum(int n){
//     int temp = sumdigit(n);    
//     while(__gcd(n,temp) <= 1){
//         n++;
//         temp = sumdigit(n);        
//     }
//     return n;
// }
