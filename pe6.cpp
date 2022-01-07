#include <iostream>
using namespace std;

int sum_square(int);
int square_sum(int);
int main(){
    int n, total(0);
    cin >> n;
    cout << sum_square(n) << endl;
    cout << "pp\n";
    cout << square_sum(n) << endl;
    total = square_sum(n) - sum_square(n);
    cout << total << endl;
    return 0;
}

int sum_square(int m){
    int p(0);
    for (size_t i = 1; i <= m; i++)
    {
        p = p + (i * i);
    }
    return p;
}

int square_sum(int p){
    int total1(0);
    for(int i=1; i<=p; i++){
      total1 = total1 + i;
    }
    
    total1 = total1 * total1;
    
    return total1;
}