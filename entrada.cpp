#include <iostream>
using namespace std;
void print_array(int array[10][10], int m, int n);
void multiplicacion_matriz(int A[10][10],int fila_1,int columna_1,int B[10][10],int columna_2,int C[10][10]);

int main(){
    int A[2][5];
    int B[5][3];
    return 0;
}

void multiplicacion_matriz(int A[10][10],int fila_1,int columna_1,int B[10][10],int columna_2,int C[10][10])
{
    

    for(int i = 0;i < fila_1; i++){
        for(int j = 0;j < columna_2; j++){
            C[i][j] = 0;
            for(int k=0;k<columna_1;k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}

void print_array(int array[10][10], int m, int n){

}