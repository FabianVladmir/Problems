#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int matriz[5][5];
	
	int total = 0, f, c;
	for(int i=0 ; i < 5 ; i++){ 	
		for(int j=0; j < 5 ; j++){
			cin >> matriz[i][j];
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(matriz[i][j] == 1){
				f = i;
				c = j;
			}	
		}
	}
	total = abs(f -2) + abs(c-2);
	cout << total << endl;
	
	
	return 0;
}

