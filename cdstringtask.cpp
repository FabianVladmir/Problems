#include <iostream>
#include <string.h>


bool vowel(char c){
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

using namespace std;

int main(){
	string cad; 
	cin >> cad;
	for(int i=0; i < cad.size(); i++){
		cad[i] = tolower(cad[i]);
	}
	for(int i=0; i < cad.size(); i++){
		if(!vowel(cad[i])){
			cout << "." << cad[i];
		}
		
	}
	
	
	return 0;
}
