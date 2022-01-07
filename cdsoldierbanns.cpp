#include <iostream>
using namespace std;

int main(){
	int price, total, cant;
	cin >> price >> total >> cant;
	int res = 0;
	for(int i=1; i<cant+1; i++){
		res = res +(price*i );
	}
	res = res - total;
	cout << res << endl;
	
	
	return 0;
}
