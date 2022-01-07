#include <iostream>
using namespace std;

int main(){
	int paradas;
	int s,b, res=0, total = 0;
	
	cin >> paradas;
	while(paradas--){
		cin >> s >> b;
		res -= s;
		res += b;
		if(res > total){
			total = res;
		}
		
		
	}
	
	cout << total << endl;
	
	return 0;
}

