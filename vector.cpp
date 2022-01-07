#include <iostream>
#include <vector>
using namespace std;

int main(){
	int cant;
	cin >> cant;
	vector<int> array(cant);
	cout <<"El tamanio del array es: " << array.size() << endl;
	vector<int> array2(array);
	cout << "El tamanio del array2 es: " << array2.size() << endl;
	
	
	return 0;
}
/* ---- VECTOR ARREGLADO -----
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    vector<int>vec;
    int n, nums;
    cin >> n;
    
    while (cin >> nums) 
    vec.push_back(nums);
 
    sort(vec.begin(), vec.end());
    
    for(int i=0; i<n; i++)
    cout << vec[i] << " ";
    return 0;}
