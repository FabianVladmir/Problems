#include <iostream>
#include <stdlib.h>
// #include <conio.h>

using namespace std;
int **ptr_matriz, fil, col;

void getData();
void printEstate(int **, int, int);

int main(){
	
	getData();
	printEstate(ptr_matriz,fil,col);
	
	for(int i = 0; i < fil; i++){
		delete []ptr_matriz[i];
	}
	delete []ptr_matriz;
	// getch();
	return 0;
}

void getData(){
	cout << "filas ?: "; cin >> fil;
	cout << "columnas?: "; cin >> col;
	ptr_matriz	= new int *[fil];
	for(int i = 0; i <fil; i++){
		ptr_matriz[i] = new int [col];
	}
	cout << "Llenando la matriz\n";
	int i,j;
	i = 0;
	for (; i < fil; i++){
		for(int j = 0; j < col; j++){
			cout << "Digite el elemento ["<<i<<"]["<<j<<"]: ";
			cin >> *(*(ptr_matriz + i) + j);
		}
	}  	
}

void printEstate(int ** ptr_matriz, int fil, int col){
	
	cout <<"\nEstado de la matriz\n";
	for(int i = 0; i <fil; i++){
		for(int j = 0; j< col; j++){
			cout <<*(*(ptr_matriz + i)+j)<<" ";
		}
		cout <<endl;;
	}		
}
