#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int m, *p;
    double total(0);
    cin >> m;
    p = new int[m];
    for (size_t i = 0; i < m; i++)
    {
        cin >> p[i];
        total += p[i];
    }
    // total = total / (m);
    cout << fixed << setprecision(5) << total/m << endl;
    return 0;
}