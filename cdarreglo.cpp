#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int *ptr_n, k, cantidad, cont = 0;
	cin >> cantidad >> k;
	
	ptr_n = new int[cantidad];
	for(int i = 0; i < cantidad; i++){
		cin >> ptr_n[i];
	}
	
	for(int i = 0; i < cantidad; i++)
		if (ptr_n[i] > k){
			cont+=1;
		}
	
	cout << cont << endl;
	return 0;
}
