#define MAXF 5
#define MAXC 5
#include <iostream>
using namespace std;
void print_array(int [MAXF][MAXC], int, int);
void calculate_product(int [MAXF][MAXC], int [MAXF][MAXC], int [MAXF][MAXC], int , int , int );

int main(){
   
	int M[MAXF][MAXC] = { {2,5,4,7,8}, {1,2,5,9,7} };
	int N[MAXF][MAXC] = { {2,6,1}, {4,5,2}, {1,1,1}, {2,2,2}, {7,8,1}	};
    print_array(M, 2, 5);
    cout << endl;
    print_array(N, 5, 3);
    cout << endl;
    int P[MAXF][MAXC];
    calculate_product(P, M, N, 5, 5 ,5);
    print_array(P, 2, 3);

    return 0;
}

void print_array(int A[MAXF][MAXC], int m, int n){
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }    
}

void calculate_product(int C[MAXF][MAXC], int A[MAXF][MAXC],int B[MAXF][MAXC], int m, int n, int p){
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (size_t k = 0; k < p; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }            
        }        
    }    
}