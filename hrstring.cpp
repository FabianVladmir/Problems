#include <iostream>
#include <string>
using namespace std;

int main() {
    string cad1, cad2, cad3;
    cin >> cad1;
    
    cin >> cad2;
    cout << cad1.size() << " " << cad2.size();
    cad3 = cad1 + cad2;
    cout << endl << cad3 <<endl;
    char p[30], g[30];
    for (int i=0; i<cad1.size(); i++){
        p[i] = cad1[i];               
    }

    for(int j=0; j<cad2.size(); j++){
        g[j] = cad2[j];
    }

    cad1[0] = g[0];
    cad2[0] = p[0];
    cout << cad1 <<" "<< cad2;

	// Complete the program
  
    return 0;
}

