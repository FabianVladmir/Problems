#include <iostream>
using namespace std;

int main(){
	int cantidad, min;
	cin >> cantidad;
	if(cantidad % 5 == 0){
		min = cantidad / 5;
	}
	else{
		min = (cantidad % 5) + 1;
	}
	cout << min << endl;
	
	return 0;
}
