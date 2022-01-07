#include <iostream>
using namespace std;

int main(){
	int cont = 0, m, n, a;
	cin >> m >> n >> a;
	if((m*n) == (a*a))
		cont = 1;
	
	else if (a <= m && a <= n) 
		cont = 4;
	else if(a <= n || a <= n)
		cont+= 2;
	cout << cont << endl;	
	return 0;
}
