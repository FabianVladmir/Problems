#include <iostream>
#include <math.h>
using namespace std;
const int mod = pow(2,20);

//RECURSIVE
long fib(int n){
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}

//RECURSIVE USING DOUBLE
double fib_double(int n){
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}

//ITERATIVE
long long int fib_ite(int n){
    if(n<=1) return n;
    if(n==2) return 2;
    long long int curr, prev1, prev2;
    curr = 0;
    prev1=1;
    prev2=1;

    for (int i = 3; i <= n; i++)
    {
        curr=prev1+prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    
    return curr;
}

double fib_ite_double(int n){
    if(n<=1) return n;
    if(n==2) return 2;
    double curr, prev1, prev2;
    curr = 0;
    prev1=1;
    prev2=1;

    for (int i = 3; i <= n; i++)
    {
        curr=prev1+prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    
    return curr;
}


void multiply(int A[2][2] , int B[2][2]) {
    int x = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    int y = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    int z = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    int w = A[1][0] * B[0][1] + A[1][1] * B[1][1];

    A[0][0] = x;
    A[0][1] = y;
    A[1][0] = z;
    A[1][1] = w;
}

void matrixPower(int A[2][2] , int N) {
    if (N <= 1) {
        return;
    }
    matrixPower(A, N/2);
    multiply(A, A);

    int B [2][2] = {{1, 1}, {1, 0}};
    if (N%2 != 0) {
        multiply(A, B);
    }
}

int fib_matrix(int N) {
    if (N <= 1) {
        return N;
    }
    int A [2][2]  = {{1, 1}, {1, 0}};
    matrixPower(A, N-1);

    return A[0][0];
}


int main(){

    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        cout << "Fibonacci [" << i << "] is: " << fib_matrix(i) % mod << endl;
    }
    
    
    return 0;
}