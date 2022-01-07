#include <iostream>

using namespace std;

int main(){
	int cantidad, cont=0;
	cin >> cantidad;
	while(cantidad--){
		int a, b, c;
		cin >> a >> b >> c;
		int k = a+b+c;
		if(k >= 2){
			cont++;
		}
	}
	cout << cont << endl;
	
	return 0;
}
