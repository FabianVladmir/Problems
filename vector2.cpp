#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vect;
    int cons1, cons2, cons3, cant, n;
    cin >> n;
    while (cin >> cant )
    vect.push_back(cant);

    
    for(int i = 0; i < n; i++){
        cout << vect[i] << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

